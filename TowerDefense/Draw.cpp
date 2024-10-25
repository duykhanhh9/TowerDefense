
#include"Draw.h"

void Draw::drawBox(int x, int y, SHORT width, SHORT height, int color)
{
    Controller::gotoXY(x, y);
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y, BLACK, BLACK, " ");

    int i = 0;
    for (; i < height; i++)
    {
        Controller::creatColorBlock(x, y + i, BLACK, BLACK, "  ");
        Controller::creatColorBlock(x + width, y + i, BLACK, 0, "  ");
    }

    Controller::gotoXY(x + 1, y + i);
    for (i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + height - 1, 0, 0, " ");
}

void Draw::drawLeft(int x, int y, int color, SHORT width, SHORT height) 
{
    for (int i = 0; i < width / 2 - 2; i++) 
    {
        Controller::creatColorBlock(x + i, y + 1, color, color, " ");
        Controller::creatColorBlock(x + i, y + height - 2, color, color, " ");
    }

    for (int i = 2; i < height - 2; i++) {
        for (int j = 0; j < width / 2; j++) {
            Controller::creatColorBlock(x - 2 + j, y + i, color, color, " ");
        }
    }
}

void Draw::drawRight(int x, int y, int color, SHORT width, SHORT height) {
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

void Draw::turnSound(int x, int y, int width, int height) 
{
    Controller::gotoXY(x, y);
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y, 0, 0, " ");

    Controller::creatColorBlock(x - 2, y + 1, 0, 0, "  ");
    
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + 1, 7, 7, " ");
    Controller::creatColorBlock(x + width, y + 1, 0, 0, "  ");
    
    for (int i = 1; i <= height - 4; i++) 
    {
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

void Draw::drawBlock(int x, int y, SHORT width, SHORT height, int color)
{
    Controller::setBackgroundColor(color);

    for (SHORT i = 0; i < height; ++i)
    {
        Controller::gotoXY(x, y + i);
        for (SHORT j = 0; j < width; ++j)
        {
            cout << " ";
        }
    }
}


void Draw::drawA(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y + height, width, height * 4, color);
    drawBlock(x + width, y, width, height, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y + height, width, height * 4, color);
}

void Draw::drawB(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width, height, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width, y + height * 4, width, height, color);
    drawBlock(x + width * 2, y + height, width, height, color);
    drawBlock(x + width * 2, y + height * 3, width, height, color);
}

void Draw::drawC(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y + height, width, height * 3, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width, y + height * 4, width * 2, height, color);
}

void Draw::drawD(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width, height, color);
    drawBlock(x + width, y + height * 4, width, height, color);
    drawBlock(x + width * 2, y + height, width, height * 3, color);
}

void Draw::drawE(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width, y + height * 2, width * 2, height, color);
    drawBlock(x + width, y + height * 4, width * 2, height, color);
}

void Draw::drawF(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width, y + height * 2, width * 2, height, color);
}

void Draw::drawG(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width + width / 2, y + height * 2, width + width / 2, height, color);
    drawBlock(x + width, y + height * 4, width * 2, height, color);
    drawBlock(x + width * 2, y + height * 3, width, height, color);
}

void Draw::drawH(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y, width, height * 5, color);
}

void Draw::drawI(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x + width, y + height, width, height * 4, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawJ(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y + height * 3, width, height, color);
    drawBlock(x + width, y + height * 4, width, height, color);
    drawBlock(x + width, y, width, height, color);
    drawBlock(x + width * 2, y, width, height * 4, color);
}

void Draw::drawK(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y, width, height * 2, color);
    drawBlock(x + width * 2, y + height * 3, width, height * 2, color);
}

void Draw::drawL(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y + height * 4, width * 2, height, color);
}

void Draw::drawM(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width, height * 2, color);
    drawBlock(x + width * 2, y + height, width, height * 2, color);
    drawBlock(x + width * 3, y, width, height * 2, color);
    drawBlock(x + width * 4, y, width, height * 5, color);
}

void Draw::drawN(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width, height * 2, color);
    drawBlock(x + width * 2, y + height, width, height * 2, color);
    drawBlock(x + width * 3, y, width, height * 5, color);
}

void Draw::drawO(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y + height, width, height * 3, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width, y + height * 4, width * 2, height, color);
    drawBlock(x + width * 3, y + height, width, height * 3, color);
}

void Draw::drawP(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width, height, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y + height, width, height, color);
}

void Draw::drawQ(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y + height, width, height * 3, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width * 2, y + height * 2, width, height, color);
    drawBlock(x + width, y + height * 4, width * 2, height, color);
    drawBlock(x + width * 3, y + height, width, height * 3, color);
    drawBlock(x + width * 4, y + height * 4, width, height, color);
}

void Draw::drawR(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y, width * 2, height, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y + height, width, height, color);
    drawBlock(x + width * 2, y + height * 3, width, height * 2, color);
}

void Draw::drawS(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y + height, width, height, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y + height * 3, width, height, color);
    drawBlock(x, y + height * 4, width * 2, height, color);
    drawBlock(x + width, y, width * 2, height, color);
}

void Draw::drawT(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x + width, y + height, width, height * 4, color);
    drawBlock(x, y, width * 3, height, color);
}

void Draw::drawU(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x + width, y + height * 4, width, height, color);
    drawBlock(x + width * 2, y, width, height * 5, color);
}

void Draw::drawV(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 4, color);
    drawBlock(x + width, y + height * 4, width, height, color);
    drawBlock(x + width * 2, y, width, height * 4, color);
}

void Draw::drawW(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 4, color);
    drawBlock(x + width, y + height * 4, width * 3, height, color);
    drawBlock(x + width * 2, y + height * 2, width, height * 2, color);
    drawBlock(x + width * 4, y, width, height * 4, color);
}

void Draw::drawY(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 3, color);
    drawBlock(x + width, y + height * 3, width, height * 2, color);
    drawBlock(x + width * 2, y, width, height * 3, color);
}

void Draw::drawX(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width, height * 2, color);
    drawBlock(x, y + height * 3, width, height * 2, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y, width, height * 2, color);
    drawBlock(x + width * 2, y + height * 3, width, height * 2, color);
}

void Draw::drawZ(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x + width * 2, y + height, width, height, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x, y + height * 3, width, height, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawSettingIcon(SHORT x, SHORT y, SHORT width, SHORT height)
{
    int m, n, tmp;
    SHORT x_tmp = x;

    ifstream inFile("iconSetting.txt");
    inFile >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inFile >> tmp;
            if (tmp == 1)
                Draw::drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                Draw::drawBlock(x, y, width, height, GRAY);

            x += width;
        }
        y += height;
        x = x_tmp;
    }

    inFile.close();
}

void Draw::drawHeartIcon(SHORT x, SHORT y, SHORT width, SHORT height)
{
    int m, n, tmp;
    SHORT x_tmp = x;
    ifstream inFile("iconHeart.txt");

    inFile >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inFile >> tmp;

            if (tmp == 1)
                Draw::drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                Draw::drawBlock(x, y, width, height, LIGHT_RED);

            else if (tmp == 3)
                Draw::drawBlock(x, y, width, height, RED);


            x += width;
        }
        y += height;
        x = x_tmp;
    }
    inFile.close();
}

void Draw::drawCoinIcon(SHORT x, SHORT y, SHORT width, SHORT height)
{
    int m, n, tmp;
    SHORT x_tmp = x;
    ifstream inFile("iconCoin.txt");

    inFile >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inFile >> tmp;

            if (tmp == 1)
                Draw::drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                Draw::drawBlock(x, y, width, height, YELLOW);

            x += width;
        }
        y += height;
        x = x_tmp;
    }
    inFile.close();
}

void Draw::drawPineIcon(SHORT x, SHORT y, SHORT width, SHORT height)
{
    int m, n, tmp;
    SHORT x_tmp = x;
    ifstream inFile("iconPine.txt");

    inFile >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inFile >> tmp;

            if (tmp == 1)
                Draw::drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                Draw::drawBlock(x, y, width, height, GREEN);
            else if (tmp == 3)
                Draw::drawBlock(x, y, width, height, LIGHT_GREEN);
            else if (tmp == 4)
                Draw::drawBlock(x, y, width, height, YELLOW);
            else if (tmp == 5)
                Draw::drawBlock(x, y, width, height, RED);

            x += width;
        }
        y += height;
        x = x_tmp;
    }
    inFile.close();
}


void Draw::drawSantaClaus(SHORT x, SHORT y, SHORT width, SHORT height)
{
    int m, n, tmp;
    SHORT x_tmp = x;
    ifstream inFile("iconSantaClaus.txt");

    inFile >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inFile >> tmp;

            if (tmp == 1)
                Draw::drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                Draw::drawBlock(x, y, width, height, RED);
            else if (tmp == 3)
                Draw::drawBlock(x, y, width, height, BRIGHT_WHITE);
            else if (tmp == 4)
                Draw::drawBlock(x, y, width, height, LIGHT_RED);
            else if (tmp == 5)
                Draw::drawBlock(x, y, width, height, GREEN);
            else if (tmp == 6)
                Draw::drawBlock(x, y, width, height, YELLOW);
            else if (tmp == 7)
                Draw::drawBlock(x, y, width, height, LIGHT_YELLOW);

            x += width;
        }
        y += height;
        x = x_tmp;
    }
    inFile.close();
}
