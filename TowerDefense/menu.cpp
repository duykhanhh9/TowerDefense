#include"menu.h"

void playSound() {
    int choice = 0;
    while (true) {
        cout << "Enter 1 to play sound.\nEnter 2 to quit: ";
        cin >> choice;
        if (choice == 1) {
            PlaySound(TEXT("3.wav"), NULL, SND_FILENAME);
        }
        else if (choice == 2) {
            break;
        }
        else {
            cout << "Try again!\n";
        }
    }
}

void soundMode(int choice) {
    if (choice == 1)
        PlaySound(TEXT("3.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
    else if (choice == 2)
        PlaySound(NULL, NULL, SND_ASYNC);
}