#include"Controller.h"

HWND Controller::consoleWindow = GetConsoleWindow();
HANDLE Controller::consoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE hConsoleOutput;
HANDLE hConsoleInput;

void Controller::setScaleWindow()
{
    CONSOLE_FONT_INFOEX info;
    info.cbSize = sizeof(info);
    GetCurrentConsoleFontEx(consoleOutput, FALSE, &info);
    info.dwFontSize.X = 5;
    info.dwFontSize.Y = 3;
    wcscpy_s(info.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(consoleOutput, FALSE, &info);
}

void Controller::setAndCenterWindow()
{
    RECT rectClient, rectWindow;
    GetClientRect(consoleWindow, &rectClient), GetWindowRect(consoleWindow, &rectWindow);
    int width = 1500;
    int height = 700;
    int posX = (GetSystemMetrics(SM_CXSCREEN) - width) / 2,
        posY = (GetSystemMetrics(SM_CYSCREEN) - height) / 2;
    MoveWindow(consoleWindow, posX, posY, width, height, TRUE);
}

// Ham an hien con tro.
void Controller::setCursor(BOOL bVisible)
{
    CONSOLE_CURSOR_INFO ConsoleCursorInfo;
    ConsoleCursorInfo.bVisible = bVisible;
    ConsoleCursorInfo.dwSize = 25; // Phan tram bao trum o cua con tro chuot
    SetConsoleCursorInfo(hConsoleOutput, &ConsoleCursorInfo);
}

void Controller::setScrollbar(BOOL Show)
{
    HWND hWnd = GetConsoleWindow();
    ShowScrollBar(hWnd, SB_BOTH, Show);
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
SHORT Controller::whereX()
{
    CONSOLE_SCREEN_BUFFER_INFO coninfo;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOutput, &coninfo);
    return coninfo.dwCursorPosition.X;
}

// Tra ve vi tri y hien tai.
SHORT Controller::whereY()
{
    CONSOLE_SCREEN_BUFFER_INFO coninfo;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOutput, &coninfo);
    return coninfo.dwCursorPosition.Y;
}

// To mau chu.
void Controller::setTextColor(WORD color)
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

// To mau nen cua chu
void Controller::setConsoleColor(WORD color) {
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

// To mau console
void Controller::setBackgroundTextColor(WORD color)
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

// Set 3 ham tren
void Controller::setColors(WORD textColor, WORD backgroundColor)
{
    setTextColor(textColor);
    setBackgroundTextColor(backgroundColor);
    setConsoleColor(backgroundColor);
}


void Controller::clearConsole()
{
    system("cls");
}

void Controller::creatColorBlock(int x, int y, int t_color, int b_color, string name)
{
    setBackgroundTextColor(b_color);
    size_t len = name.length();
    setTextColor(t_color);
    for (int i = 0; i < len; ++i)
    {
        gotoXY(x + i, y);
        cout << " ";
    }
    gotoXY(x, y); cout << name;
    setBackgroundTextColor(1);
}
