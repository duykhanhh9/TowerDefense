#pragma once
#include"Controller.h"
#pragma comment(lib, "Winmm.lib") 

class Menu {
public:
    static void playSound();
    static void soundMode(int);

    Menu();


    static int mainMenu();
    static void settingSound(int&);
    static void leaderBoard();
    static void savePlayer(string);
    static void deletePlayer(string);
    static bool checkFile(string);
};
