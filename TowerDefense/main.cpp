#include"Controller.h"
#include"menu.h"
#include "Item.h"
#include"Controller.h"

int main() {
    int x = 5;
    int choice = 0;

    Controller::setAndCenterWindow();
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
    Controller::setBackgroundColor(12);
    Controller::setColor(12);
    system("pause");
    
	return 0;
}