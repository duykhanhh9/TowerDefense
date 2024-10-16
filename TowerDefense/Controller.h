#pragma once
#include <iostream>
#include <Windows.h>
#include <Shlwapi.h>
#include <conio.h>
#include <string>
#include <cstring>
#include <mmsystem.h>

using namespace std;

class Controller {
public:
    static HWND consoleWindow;
    static HANDLE consoleOutput;
    void setFontInfo();
    static void setAndCenterWindow();
    static void resizeConsole(SHORT width, SHORT height);
    static void clrscr(void);
    static void gotoXY(SHORT x, SHORT y);
    static SHORT wherex();
    static SHORT wherey();
    static void setColor(WORD color);
    static void setFullColors(WORD textColor, WORD backgroundColor);
    static void setFullBackgroundColor(WORD color);
    static void setBackgroundColor(WORD color);
    static void resettextattr();
    static WORD textattr();
    static void Cursor(BOOL bVisible = TRUE, DWORD dwSize = 25);
    static void deleteRow(SHORT SStartPos, SHORT SNumberRow);
    static void creatColorBlock(int x, int y, int t_color, int b_color, string name);
};

