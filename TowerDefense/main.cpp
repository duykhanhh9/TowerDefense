#include"Controller.h"
#include"menu.h"
#include "Item.h"

int main() {
    int x = 5;
    int choice = 0;
    Controller::setAndCenterWindow();
    Controller::setSizeConsole(1100, 768);
    Controller::setFullColors(12, 12);
    Controller::setBackgroundColor(12);
    Controller::setColor(12);

    Item::box(2, 2, 50, 20);
    Item::turnSound(12, 4, 20, 6);
    
    for (int i = 0; i < 16; i++) {
        Controller::creatColorBlock(x, 16, i, i, " ");
        x++;
    }
    while (true)
    {
        int c;

        //if (_kbhit()) {
            c = _getch();
            if (c == 72) {
                Item::drawLeft(12, 4, 20, 6, 2);
                Item::drawRight(12, 4, 20, 6, 7);
                soundMode(1);
            }
                
            else if (c == 80) {
                Item::drawRight(12, 4, 20, 6, 2);
                Item::drawLeft(12, 4, 20, 6, 7);
                soundMode(2);
            }
                
            if (c == 65)
                break;

        //}
    }
    
    // chu nen
    //for (int i = 23; i < 42; i++) {
    //    for (int j = 9; j < 11; j++) {
    //        Controller::gotoXY(i, j);
    //        Controller::creatColorBlock(i, j, 0, 14, " ");
    //    }
    //}
    //for (int i = 30; i < 35; i++) {
    //    for (int j = 9; j < 19; j++) {
    //        Controller::gotoXY(i, j);
    //        Controller::creatColorBlock(i, j, 0, 14, " ");
    //    }
    //}

    //// chu chinh
    //for (int i = 22; i < 41; i++) {
    //    for (int j = 8; j < 10; j++) {
    //        Controller::gotoXY(i, j);
    //        Controller::creatColorBlock(i, j, 0, 15, " ");
    //    }
    //}
    //for (int i = 29; i < 34; i++) {
    //    for (int j = 8; j < 18; j++) {
    //        Controller::gotoXY(i, j);
    //        Controller::creatColorBlock(i, j, 0, 15, " ");
    //    }
    //}
    Controller::setBackgroundColor(12);
    Controller::setColor(12);
    system("pause");
    
	return 0;
}