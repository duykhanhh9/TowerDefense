#include"Controller.h"

HWND Controller::consoleWindow = GetConsoleWindow();
HANDLE Controller::consoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE hConsoleOutput;
HANDLE hConsoleInput;

void Controller::setSizeConsole(int width, int height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void Controller::setFontInfo()
{
    // 12 - 24
    CONSOLE_FONT_INFOEX info;
    info.cbSize = sizeof(info);
    GetCurrentConsoleFontEx(consoleOutput, FALSE, &info);
    info.dwFontSize.X = 12;
    info.dwFontSize.Y = 24;
    wcscpy_s(info.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(consoleOutput, FALSE, &info);
}

void Controller::setAndCenterWindow()
{
    RECT rectClient, rectWindow;
    GetClientRect(consoleWindow, &rectClient), GetWindowRect(consoleWindow, &rectWindow);
    int width = 1100;
    int height = 768;
    int posX = (GetSystemMetrics(SM_CXSCREEN) - width) / 2,
        posY = (GetSystemMetrics(SM_CYSCREEN) - height) / 2;
    MoveWindow(consoleWindow, posX, posY, width, height, TRUE);
}

// Ham thay doi kich co man hinh console.
void Controller::resizeConsole(SHORT width, SHORT height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);

    COORD crd = { width, height };
    SMALL_RECT rec = { 0, 0, width - 1, height - 1 };
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleWindowInfo(hConsoleOutput, TRUE, &rec);
    SetConsoleScreenBufferSize(hConsoleOutput, crd);
}

// Ham xoa man hinh khong bi dut(lag).
void Controller::clrscr(void)
{
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    COORD Home = { 0, 0 };
    DWORD dummy;

    hConsoleOutput = GetStdHandle(STD_INPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    FillConsoleOutputCharacter(hConsoleOutput, ' ', screen_buffer_info.dwSize.X * screen_buffer_info.dwSize.Y, Home, &dummy);
    screen_buffer_info.dwCursorPosition.X = 0;
    screen_buffer_info.dwCursorPosition.Y = 0;
    SetConsoleCursorPosition(hConsoleOutput, screen_buffer_info.dwCursorPosition);
}

// Ham dich chuyen con tro den toa do x, y.
void Controller::gotoXY(SHORT x, SHORT y)
{
    COORD Cursor_an_Pos = { x, y };
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// Tra ve vi tri x hien tai.
SHORT Controller::wherex()
{
    CONSOLE_SCREEN_BUFFER_INFO coninfo;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOutput, &coninfo);
    return coninfo.dwCursorPosition.X;
}

// Tra ve vi tri y hien tai.
SHORT Controller::wherey()
{
    CONSOLE_SCREEN_BUFFER_INFO coninfo;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOutput, &coninfo);
    return coninfo.dwCursorPosition.Y;
}

// Ham to mau chu.
void Controller::setColor(WORD color)
{
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

// to background tru chu cai
void Controller::setFullBackgroundColor(WORD color) {
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screenBufferInfo);

    color &= 0x0F;
    color <<= 4;

    DWORD cells = screenBufferInfo.dwSize.X * screenBufferInfo.dwSize.Y;
    COORD coord = { 0, 0 };
    DWORD written;

    FillConsoleOutputAttribute(hConsoleOutput, color, cells, coord, &written);

    SetConsoleCursorPosition(hConsoleOutput, coord);
}

// Ham thay doi mau nen hien thi cua chu.
void Controller::setBackgroundColor(WORD color)
{
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    color <<= 4; // Dich trai 3 bit de phu hop voi mau nen
    wAttributes &= 0xff0f; // Cai 0 cho 1 bit chu nhay va 3 bit mau nen
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

WORD Controller::textattr()
{
    CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
    GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleInfo);
    return ConsoleInfo.wAttributes;
}

void Controller::resettextattr()
{
    DWORD Mau_Mac_Dinh = textattr();
    SetConsoleTextAttribute(hConsoleOutput, Mau_Mac_Dinh);
}

void Controller::creatColorBlock(int x, int y, int t_color, int b_color, string name)
{
    setBackgroundColor(b_color);
    int len = name.length();
    setColor(t_color);
    for (int i = 0; i < len; ++i)
    {
        gotoXY(x + i, y);
        cout << " ";
    }
    gotoXY(x, y); cout << name;
    setBackgroundColor(1);
}

// Ham an hien con tro.
void Controller::Cursor(BOOL bVisible, DWORD dwSize)
{
    CONSOLE_CURSOR_INFO ConsoleCursorInfo;
    ConsoleCursorInfo.bVisible = bVisible;
    ConsoleCursorInfo.dwSize = dwSize; // Phan tram bao trum o cua con tro chuot
    SetConsoleCursorInfo(hConsoleOutput, &ConsoleCursorInfo);
}

// Xoa so luong dong, SStartPos - Vi tri bat dau xoa, SNumberRow so luong dong can xoa.
void Controller::deleteRow(SHORT SStartPos, SHORT SNumberRow)
{
    CONSOLE_SCREEN_BUFFER_INFO  ConsoleInfo;
    COORD Pos = { 0, SStartPos };
    DWORD Tmp;
    GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleInfo);
    FillConsoleOutputCharacter(hConsoleOutput, ' ', ConsoleInfo.dwSize.X * SNumberRow, Pos, &Tmp);
    FillConsoleOutputAttribute(hConsoleOutput, 15, ConsoleInfo.dwSize.X * SNumberRow, Pos, &Tmp);
    SetConsoleCursorPosition(hConsoleOutput, Pos);
}

void Controller::setFullColors(WORD textColor, WORD backgroundColor) {
    setBackgroundColor(backgroundColor);
    setFullBackgroundColor(backgroundColor);
    setColor(textColor);
}

