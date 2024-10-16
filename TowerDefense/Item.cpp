#include"Item.h"

void Item::mons1() {
    Controller cons;
    cons.gotoXY(48, 10);
    for (int i = 48; i < 54; i++)
        cons.creatColorBlock(i, 10, 0, 0, " ");
    cons.gotoXY(46, 11);
    for (int i = 46; i <= 55; i++)
        cons.creatColorBlock(i, 11, 0, 0, " ");
    cons.gotoXY(44, 12);
    for (int j = 12; j < 16; j++)
        for (int i = 44; i <= 57; i++)
            Controller::creatColorBlock(i, j, 0, 0, " ");

    Controller::gotoXY(46, 12);
    Controller::creatColorBlock(46, 12, 0, 8, "  ");
    Controller::gotoXY(48, 12);
    Controller::creatColorBlock(48, 12, 0, 5, "  ");
    Controller::gotoXY(46, 13);
    Controller::creatColorBlock(46, 13, 0, 8, "    ");


    Controller::gotoXY(52, 12);
    Controller::creatColorBlock(52, 12, 0, 8, "  ");
    Controller::gotoXY(54, 12);
    Controller:: creatColorBlock(54, 12, 0, 5, "  ");
    Controller::gotoXY(52, 13);
    Controller::creatColorBlock(52, 13, 0, 8, "    ");
}

void Item::box(int left, int top, int width, int height)
{
    Controller::gotoXY(left, top);
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(left + i, top, 0, 0, " ");

    int i = 0;
    for (; i < height; i++)
    {
        Controller::creatColorBlock(left, top + i, 0, 0, "  ");
        Controller::creatColorBlock(left + width, i + top, 0, 0, "  ");
    }

    Controller::gotoXY(left + 1, top + i);
    for (i = 0; i < width; i++)
        Controller::creatColorBlock(left + i, height + top - 1, 0, 0, " ");
}

void Item::drawLeft(int x, int y, int width, int height, int color) {
    for (int i = 0; i < width / 2 - 2; i++) {
        Controller::creatColorBlock(x + i, y + 1, color, color, " ");
        Controller::creatColorBlock(x + i, y + height - 2, color, color, " ");
    }

    for (int i = 2; i < height - 2; i++) {
        for (int j = 0; j < width / 2; j++) {
            Controller::creatColorBlock(x - 2 + j, y + i, color, color, " ");
        }
    }
}

void Item::drawRight(int x, int y, int width, int height, int color) {
    for (int i = width / 2; i < width; i++) {
        Controller::creatColorBlock(x + i, y + 1, color, color, " ");
        Controller::creatColorBlock(x + i, y + height - 2, color, color, " ");
    }

    for (int i = 2; i < height - 2; i++) {
        for (int j = width / 2 - 2; j < width; j++) {
            Controller::creatColorBlock(x + 2 + j, y + i, color, color, " ");
        }
    }
}

void Item::turnSound(int x, int y, int width, int height) {
    Controller::gotoXY(x, y);
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y, 0, 0, " ");
    Controller::creatColorBlock(x - 2, y + 1, 0, 0, "  ");
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + 1, 7, 7, " ");
    Controller::creatColorBlock(x + width, y + 1, 0, 0, "  ");
    for (int i = 1; i <= height - 4; i++) {
        Controller::creatColorBlock(x - 4, y + i + 1, 0, 0, "  ");
        for (int j = 0; j < width + 4; j++)
            Controller::creatColorBlock(x - 2 + j, y + 1 + i, 7, 7, " ");
        Controller::creatColorBlock(x + width + 2, y + 1 + i, 0, 0, "  ");
    }

    Controller::creatColorBlock(x - 2, y + height - 2, 0, 0, "  ");
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + height - 2, 7, 7, " ");
    Controller::creatColorBlock(x + width, y + height - 2, 0, 0, "  ");

    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + height - 1, 0, 0, " ");

    for (int i = 1; i < height; i++)
        Controller::creatColorBlock(x - 2 + (width / 2), y + i, 0, 0, "  ");
}
