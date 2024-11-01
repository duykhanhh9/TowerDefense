#pragma once
#include <iostream>
#include <Windows.h>
#include <Shlwapi.h>
#include <conio.h>
#include <string>
#include <cstring>
#include <mmsystem.h>
#include <stack>
#include <fstream>

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
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define LIGHT_AQUA 11
#define LIGHT_RED 12
#define LIGHT_PURPLE 13
#define LIGHT_YELLOW 14
#define BRIGHT_WHITE 15

#define KEY_DELETE 8
#define KEY_ENTER 13
#define KEY_ESC 27
#define KEY_SPACE 32
#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80

class Controller 
{
    public:
        static HWND consoleWindow;
        static HANDLE consoleOutput;

        static void setScaleWindow();
        static void setAndCenterWindow();
        static void setScrollbar(BOOL);
        static void setCursor(BOOL);

        static void setTextColor(WORD color);
        static void setBackgroundTextColor(WORD color);
        static void setConsoleColor(WORD color);
        static void setColors(WORD textColor, WORD backgroundColor);
        
        static void gotoXY(SHORT x, SHORT y);
        static SHORT whereX();
        static SHORT whereY();

        static void creatColorBlock(int x, int y, int t_color, int b_color, string name);

        static void clrscr(void);
        static void clearConsole();
};
