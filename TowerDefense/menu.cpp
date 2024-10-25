#include"menu.h"

Menu::Menu() {
    Controller::setFontInfo();

    Controller::setSizeConsole(1500, 700);
    Controller::setAndCenterWindow();
    Controller::ShowScrollbar(false);

    Controller::setFullColors(LIGHT_AQUA, LIGHT_AQUA);
}

void Menu::playSound() {
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

void Menu::soundMode(int choice) {
    if (choice == 1)
        PlaySound(TEXT("3.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
    else if (choice == 2)
        PlaySound(NULL, NULL, SND_ASYNC);
}

int Menu::mainMenu() {
    Menu();

    vector<pair<int, int>> point = { { 120, 140 }, { 240, 140 }, {360, 140}, {480, 140 }, {600, 140}, {720, 140} };
    int col[6] = { AQUA, RED, GREEN, YELLOW, BLUE, PURPLE };

    Draw::drawBlock(0, 180, 1836, 26, LIGHT_YELLOW);

    // draw 
    Draw::drawIcon(point[0].first - 2, point[0].second - 1, 84, 50, BLACK, WHITE);
    Draw::drawIcon(point[1].first - 2, point[1].second - 1, 84, 50, BLACK, WHITE);
    Draw::drawIcon(point[2].first - 2, point[2].second - 1, 84, 50, BLACK, WHITE);
    Draw::drawIcon(point[3].first - 2, point[3].second - 1, 84, 50, BLACK, WHITE);
    Draw::drawIcon(point[4].first - 2, point[4].second - 1, 84, 50, BLACK, WHITE);
    Draw::drawIcon(point[5].first - 2, point[5].second - 1, 84, 50, BLACK, WHITE);

    Draw::drawIcon(point[0].first, point[0].second, 80, 48, col[0], WHITE);
    Draw::drawIcon(point[1].first, point[1].second, 80, 48, col[1], WHITE);
    Draw::drawIcon(point[2].first, point[2].second, 80, 48, col[2], WHITE);
    Draw::drawIcon(point[3].first, point[3].second, 80, 48, col[3], WHITE);
    Draw::drawIcon(point[4].first, point[4].second, 80, 48, col[4], WHITE);
    Draw::drawIcon(point[5].first, point[5].second, 80, 48, col[5], WHITE);

    int check = 0, pre = 0;

    Draw::drawIconPlay(point[0].first, point[0].second, 8, 4, col[0]);
    Draw::drawIconSave(point[1].first, point[1].second, 4, 2, col[1]);
    Draw::drawIconMusic(point[2].first, point[2].second, 4, 2, col[2]);
    Draw::drawIconLeaderBoard(point[3].first, point[3].second, 6, 3, col[3]);
    Draw::drawIconHelp(point[4].first, point[4].second, 3, 2, col[4]);
    Draw::drawIconExit(point[5].first, point[5].second, 4, 2, col[5]);
    

    while (true) {
        
        int c = _getch();
        if (c == 0 || c == 224) {
            switch (_getch())
            {
            case KEY_LEFT:
                if (check == 0) {
                    pre = 0;
                    check = 5; 
                }
                else {
                    pre = check;
                    check--;
                }
                break;

            case KEY_RIGHT:
                if (check == 5) {
                    pre = 5;
                    check = 0;
                }
                else {
                    pre = check;
                    check++;
                }
                break;
            default:
                break;
            }
        }
        else {
            if (c == KEY_ESC) {
                 break;
                
            }
            else if (c == KEY_ENTER) {

                return check;
            }
        }

        Draw::drawIcon(point[pre].first, point[pre].second, 80, 48, col[pre], WHITE);
        Draw::drawIcon(point[check].first, point[check].second, 80, 48, col[check], BRIGHT_WHITE);

        if (pre == 0) {
            Draw::drawIconPlay(point[0].first, point[0].second, 8, 4, col[0]);
        }
        else if (pre == 1) {
            Draw::drawIconSave(point[1].first, point[1].second, 4, 2, col[1]);              
        }
        else if(pre == 2)
            Draw::drawIconMusic(point[2].first, point[2].second, 4, 2, col[2]);
        else if(pre == 3)
            Draw::drawIconLeaderBoard(point[3].first, point[3].second, 6, 3, col[3]);
        else if(pre == 4)
            Draw::drawIconHelp(point[4].first, point[4].second, 3, 2, col[4]);
        else
            Draw::drawIconExit(point[5].first, point[5].second, 4, 2, col[5]);

        if (check == 0) {
            Draw::drawIconPlay(point[0].first, point[0].second, 8, 4, col[0]);
        }
        else if (check == 1) {
            Draw::drawIconSave(point[1].first, point[1].second, 4, 2, col[1]);
        }
        else if (check == 2)
            Draw::drawIconMusic(point[2].first, point[2].second, 4, 2, col[2]);
        else if (check == 3)
            Draw::drawIconLeaderBoard(point[3].first, point[3].second, 6, 3, col[3]);
        else if (check == 4)
            Draw::drawIconHelp(point[4].first, point[4].second, 3, 2, col[4]);
        else
            Draw::drawIconExit(point[5].first, point[5].second, 4, 2, col[5]);
    }
}


void Menu::settingSound(int& mode) {
    pair<int, int> p = { 150, 20 };

    // khung setting
    Draw::drawIcon(p.first, p.second, 300, 100, BLACK, WHITE);

    Draw::drawIcon(250, 10, 100, 20, BLACK, WHITE);
    
    // exit
    Draw::drawIcon(275, 110, 50, 10, BLACK, WHITE);

    // volume
    Draw::drawIcon(320, 40, 30, 15, BLACK, RED);

    int check = 1;

    while (true) {
        int c = _getch();
        if (c == 0 || c == 224) {
            switch (_getch())
            {
            case KEY_LEFT:
                if(check == 2) {
                    //Draw::drawLeft(15, 8, p.first, p.second, GREEN);
                    //Draw::drawRight(15, 8, p.first, p.second, WHITE);
                    check = 1;
                }
                break;

            case KEY_RIGHT:
                if(check == 1) {
                    //Draw::drawLeft(15, 8, p.first, p.second, WHITE);
                    //Draw::drawRight(15, 8, p.first, p.second, GREEN);
                    check = 2;
                }
                break;
            case KEY_DOWN:
                if (check == 1 || check == 2) {
                    //Draw::drawLeft(15, 8, p.first, p.second, WHITE);
                    //Draw::drawRight(15, 8, p.first, p.second, WHITE);
                    Draw::drawBlock(52, 24, 16, 3, RED);  // back node
                    check = 3;
                }
                break;
            case KEY_UP:
                if (check == 3) {
                    Draw::drawBlock(52, 24, 16, 3, WHITE);
                    //Draw::drawLeft(15, 8, p.first, p.second, GREEN);
                    check = 1;
                }
                break;
            default:
                break;
            }
        }
        else {
            if (c == KEY_ESC) {
                break;

            }
            else if (c == KEY_ENTER) {
                if (check == 1 || check == 2) {
                    if (mode == 1 && check == 2) {
                        soundMode(check);
                        mode = 0;
                    }
                    else if (mode == 0 && check == 1) {
                        soundMode(check);
                        mode = 1;
                    }
                }
                    
                else
                    return;
            }
        }
    }
}
