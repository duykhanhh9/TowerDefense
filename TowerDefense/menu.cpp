#include"menu.h"

void playSound() {
    int choice = 0;
    while (true) {
        cout << "Enter 1 to play sound.\nEnter 2 to quit: ";
        cin >> choice;
        if (choice == 1) {
            PlaySound(TEXT("soundback.wav"), NULL, SND_FILENAME);
        }
        else if (choice == 2) {
            break;
        }
        else {
            cout << "Try again!\n";
        }
    }
}

void mons1() {
	gotoXY(48, 10);
	for (int i = 48; i < 54; i++)
		creatColorBlock(i, 10, 0, 0, " ");
	gotoXY(46, 11);
	for (int i = 46; i <= 55; i++)
		creatColorBlock(i, 11, 0, 0, " ");
	gotoXY(44, 12);
	for (int j = 12; j < 16; j++)
		for (int i = 44; i <= 57; i++)
			creatColorBlock(i, j, 0, 0, " ");

	gotoXY(46, 12);
	creatColorBlock(46, 12, 0, 8, "  ");
	gotoXY(48, 12);
	creatColorBlock(48, 12, 0, 5, "  ");
	gotoXY(46, 13);
	creatColorBlock(46, 13, 0, 8, "    ");


	gotoXY(52, 12);
	creatColorBlock(52, 12, 0, 8, "  ");
	gotoXY(54, 12);
	creatColorBlock(54, 12, 0, 5, "  ");
	gotoXY(52, 13);
	creatColorBlock(52, 13, 0, 8, "    ");
}