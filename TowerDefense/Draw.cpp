#include "Draw.h"

// draw alphabet
void Draw::drawBlock(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    Controller::setBackgroundTextColor(color);

    for (SHORT i = 0; i < height; i++)
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

// Draw digit
void Draw::drawZero(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 2, height, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
    drawBlock(x, y, width, height * 4, color);
    drawBlock(x + width * 2, y, width, height * 4, color);
}

void Draw::drawOne(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width, height * 5, color);
}

void Draw::drawTwo(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 2, height, color);
    drawBlock(x + width * 2, y, width, height * 2, color);
    drawBlock(x, y + (height * 2), width * 3, height, color);
    drawBlock(x, y + (height * 2), width, height * 2, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawThree(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 2, height, color);
    drawBlock(x + width * 2, y, width, height * 4, color);
    drawBlock(x, y + (height * 2), width * 3, height, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawFour(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    drawBlock(x, y, width, height * 3, color);
    drawBlock(x + width, y + height * 2, width, height, color);
    drawBlock(x + width * 2, y, width, height * 5, color);
}

void Draw::drawFive(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x, y, width, height * 2, color);
    drawBlock(x, y + height * 2, width * 3, height, color);
    drawBlock(x + width * 2, y + height * 2, width, height * 2, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawSix(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x, y + (height * 2), width * 3, height, color);
    drawBlock(x + width * 2, y + (height * 2), width, height * 2, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawSeven(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x + width * 2, y, width, height * 5, color);
}

void Draw::drawEight(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x + width * 2, y, width, height * 5, color);
    drawBlock(x, y + (height * 2), width * 3, height, color);
    drawBlock(x, y, width, height * 5, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

void Draw::drawNine(SHORT x, SHORT y, SHORT width, SHORT height, int color) 
{
    drawBlock(x, y, width * 3, height, color);
    drawBlock(x + width * 2, y, width, height * 5, color);
    drawBlock(x, y + (height * 2), width * 3, height, color);
    drawBlock(x, y, width, height * 2, color);
    drawBlock(x, y + height * 4, width * 3, height, color);
}

// Draw icon
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
                drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                drawBlock(x, y, width, height, GRAY);

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
                drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                drawBlock(x, y, width, height, LIGHT_RED);

            else if (tmp == 3)
                drawBlock(x, y, width, height, RED);


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
                drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                drawBlock(x, y, width, height, YELLOW);

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
                drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                drawBlock(x, y, width, height, GREEN);
            else if (tmp == 3)
                drawBlock(x, y, width, height, LIGHT_GREEN);
            else if (tmp == 4)
                drawBlock(x, y, width, height, YELLOW);
            else if (tmp == 5)
                drawBlock(x, y, width, height, RED);

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
                drawBlock(x, y, width, height, BLACK);
            else if (tmp == 2)
                drawBlock(x, y, width, height, RED);
            else if (tmp == 3)
                drawBlock(x, y, width, height, BRIGHT_WHITE);
            else if (tmp == 4)
                drawBlock(x, y, width, height, LIGHT_RED);
            else if (tmp == 5)
                drawBlock(x, y, width, height, GREEN);
            else if (tmp == 6)
                drawBlock(x, y, width, height, YELLOW);
            else if (tmp == 7)
                drawBlock(x, y, width, height, LIGHT_YELLOW);

            x += width;
        }
        y += height;
        x = x_tmp;
    }
    inFile.close();
}

void Draw::drawMonster(SHORT x, SHORT y, SHORT width, SHORT height)
{
    int m, n, tmp;
    SHORT x_tmp = x;
    ifstream inFile("iconMonster.txt");
    
    inFile >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inFile >> tmp;
            if (tmp == 1)
                drawBlock(x, y, width, height, BLACK);           
            else if (tmp == 2)         
                drawBlock(x, y, width, height, LIGHT_AQUA);           
            else if (tmp == 3)
                drawBlock(x, y, width, height, YELLOW);           
            else if (tmp == 4)
                drawBlock(x, y, width, height, RED);
            else if (tmp == 5)           
                drawBlock(x, y, width, height, LIGHT_RED);          
            else if (tmp == 6)            
                drawBlock(x, y, width, height, GREEN);
          
            x += width;
        }
        y += height;
        x = x_tmp;
    }
    inFile.close();
}

