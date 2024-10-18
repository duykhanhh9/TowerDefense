#pragma once
#include <iostream>
#include <Windows.h>
#include <Shlwapi.h>
#include <conio.h>
#include <string>
#include <cstring>
#include <mmsystem.h>

using namespace std;

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GRAY 8
//#define LIGHT_BLUE 9
//#define LIGHT_GREEN 10
//#define LIGHT_AQUA 11
//#define LIGHT_RED 12
//#define LIGHT_BLUE 13
//#define LIGHT YELLOW 14
//#define BRIGHT_WHITE 15

class Controller {
public:
    static HWND consoleWindow;
    static HANDLE consoleOutput;
    static void setSizeConsole(int, int);
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

