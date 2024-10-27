#include "Draw.h"

// draw alphabet

void Draw::drawColon(SHORT x, SHORT y, SHORT width, SHORT height, int color)
{
    drawBlock(x + width, y + height, width, height, color);
    drawBlock(x + width, y + height * 3, width, height, color);
}

void Draw::printConsoleInput(int key, SHORT x, SHORT y, SHORT width, SHORT height, int shadowColor, int color)
{ 
    if (key == 48)
    {
        drawZero(x + height, y, width, height, shadowColor);
        drawZero(x, y, width, height, color);
    }
    else if (key == 49)
    {
        drawOne(x + height, y, width, height, shadowColor);
        drawOne(x, y, width, height, color);
    }
    else if (key == 50)
    {
        drawTwo(x + height, y, width, height, shadowColor);
        drawTwo(x, y, width, height, color);
    }
    else if (key == 51)
    {
        drawThree(x + height, y, width, height, shadowColor);
        drawThree(x, y, width, height, color);
    }
    else if (key == 52)
    {
        drawFour(x + height, y, width, height, shadowColor);
        drawFour(x, y, width, height, color);
    }
    else if (key == 53)
    {
        drawFive(x + height, y, width, height, shadowColor);
        drawFive(x, y, width, height, color);
    }
    else if (key == 54)
    {
        drawSix(x + height, y, width, height, shadowColor);
        drawSix(x, y, width, height, color);
    }
    else if (key == 55)
    {
        drawSeven(x + height, y, width, height, shadowColor);
        drawSeven(x, y, width, height, color);
    }
    else if (key == 56)
    {
        drawEight(x + height, y, width, height, shadowColor);
        drawEight(x, y, width, height, color);
    }
    else if (key == 57)
    {
        drawNine(x + height, y, width, height, shadowColor);
        drawNine(x, y, width, height, color);
    }
    else if (key == 58)
    {
        drawColon(x + width / 2, y, width, height, shadowColor);
        drawColon(x, y, width, height, color);
    }
    else if (key == 65 || key == 97)
    {
        drawA(x + height, y, width, height, shadowColor);
        drawA(x, y, width, height, color);
    }
    else if (key == 66 || key == 98)
    {
        drawB(x + height, y, width, height, shadowColor);
        drawB(x, y, width, height, color);
    }
    else if (key == 67 || key == 99)
    {
        drawC(x + height, y, width, height, shadowColor);
        drawC(x, y, width, height, color);
    }
    else if (key == 68 || key == 100)
    {
        drawD(x + height, y, width, height, shadowColor);
        drawD(x, y, width, height, color);
    }
    else if (key == 69 || key == 101)
    {
        drawE(x + height, y, width, height, shadowColor);
        drawE(x, y, width, height, color);
    }
    else if (key == 70 || key == 102)
    {
        drawF(x + height, y, width, height, shadowColor);
        drawF(x, y, width, height, color);
    }
    else if (key == 71 || key == 103)
    {
        drawG(x + height, y, width, height, shadowColor);
        drawG(x, y, width, height, color);
    }
    else if (key == 72 || key == 104)
    {
        drawH(x + height, y, width, height, shadowColor);
        drawH(x, y, width, height, color);
    }
    else if (key == 73 || key == 105)
    {
        drawI(x + height, y, width, height, shadowColor);
        drawI(x, y, width, height, color);
    }
    else if (key == 74 || key == 106)
    {
        drawJ(x + height, y, width, height, shadowColor);
        drawJ(x, y, width, height, color);
    }
    else if (key == 75 || key == 107)
    {
        drawK(x + height, y, width, height, shadowColor);
        drawK(x, y, width, height, color);
    }
    else if (key == 76 || key == 108)
    {
        drawL(x + height, y, width, height, shadowColor);
        drawL(x, y, width, height, color);
    }
    else if (key == 77 || key == 109)
    {
        drawM(x + height, y, width, height, shadowColor);
        drawM(x, y, width, height, color);
    }
    else if (key == 78 || key == 110)
    {
        drawN(x + height, y, width, height, shadowColor);
        drawN(x, y, width, height, color);
    }
    else if (key == 79 || key == 111)
    {
        drawO(x + height, y, width, height, shadowColor);
        drawO(x, y, width, height, color);
    }
    else if (key == 80 || key == 112)
    {
        drawP(x + height, y, width, height, shadowColor);
        drawP(x, y, width, height, color);
    }
    else if (key == 81 || key == 103)
    {
        drawQ(x + height, y, width, height, shadowColor);
        drawQ(x, y, width, height, color);
    }
    else if (key == 82 || key == 114)
    {
        drawR(x + height, y, width, height, shadowColor);
        drawR(x, y, width, height, color);

    }
    else if (key == 83 || key == 115)
    {
        drawS(x + height, y, width, height, shadowColor);
        drawS(x, y, width, height, color);
    }
    else if (key == 84 || key == 116)
    {
        drawT(x + height, y, width, height, shadowColor);
        drawT(x, y, width, height, color);
    }
    else if (key == 85 || key == 117)
    {
        drawU(x + height, y, width, height, shadowColor);
        drawU(x, y, width, height, color);
    }
    else if (key == 86 || key == 118)
    {
        drawV(x + height, y, width, height, shadowColor);
        drawV(x, y, width, height, color);
    }
    else if (key == 87 || key == 119)
    {
        drawW(x + height, y, width, height, shadowColor);
        drawW(x, y, width, height, color);
    }
    else if (key == 88 || key == 120)
    {
        drawX(x + height, y, width, height, shadowColor);
        drawX(x, y, width, height, color);
    }
    else if (key == 89 || key == 121)
    {
        drawY(x + height, y, width, height, shadowColor);
        drawY(x, y, width, height, color);
    }
    else if (key == 90 || key == 122)
    {
        drawZ(x + height, y, width, height, shadowColor);
        drawZ(x, y, width, height, color);
    }
}

void Draw::drawFrame(SHORT x, SHORT y, SHORT widScale, SHORT heiScale, int width, int height, int color, int bgColor)
{
    // canh tren
    drawBlock(x + widScale * 2, y, width - widScale * 4, heiScale, BLACK);
    drawBlock(x + widScale * 2, y + height - heiScale, width - widScale * 4, heiScale, BLACK);
    
    // canh dung
    drawBlock(x, y + heiScale * 3, widScale, height - heiScale * 6, BLACK);
    drawBlock(x + width - widScale, y + heiScale * 3, widScale, height - heiScale * 6, BLACK);

    // canh goc
    drawBlock(x, y + height - heiScale * 3, widScale * 2, heiScale, BLACK);
    drawBlock(x + width - widScale * 2, y + height - heiScale * 3, widScale * 2, heiScale, BLACK);

    drawBlock(x + widScale, y + height - heiScale * 2, widScale * 2, heiScale, BLACK);
    drawBlock(x + width - widScale * 3, y + height - heiScale * 2, widScale * 2, heiScale, BLACK);

    drawBlock(x, y + heiScale * 2, widScale * 2, heiScale, BLACK);
    drawBlock(x + width - widScale * 2, y + heiScale * 2, widScale * 2, heiScale, BLACK);

    drawBlock(x + widScale, y + heiScale, widScale * 2, heiScale, BLACK);
    drawBlock(x + width - widScale * 3, y + heiScale, widScale * 2, heiScale, BLACK);

    // canh tren
    drawBlock(x + widScale * 3, y + heiScale, width - widScale * 6, heiScale, color);
    drawBlock(x + widScale * 3, y + height - heiScale * 2, width - widScale * 6, heiScale, color);

    // canh dung
    drawBlock(x + widScale, y + heiScale * 4, widScale, height - heiScale * 8, color);
    drawBlock(x + width - widScale * 2, y + heiScale * 4, widScale, height - heiScale * 8, color);

    // canh goc
    drawBlock(x + widScale * 2, y + heiScale * 2, widScale * 2, heiScale, color);
    drawBlock(x + width - widScale * 4, y + heiScale * 2, widScale * 2, heiScale, color);

    drawBlock(x + widScale, y + heiScale * 3, widScale * 2, heiScale, color);
    drawBlock(x + width - widScale * 3, y + heiScale * 3, widScale * 2, heiScale, color);

    drawBlock(x + widScale, y + height - heiScale * 4, widScale * 2, heiScale, color);
    drawBlock(x + width - widScale * 3, y + height - heiScale * 4, widScale * 2, heiScale, color);

    drawBlock(x + widScale * 2, y + height - heiScale * 3, widScale * 2, heiScale, color);
    drawBlock(x + width - widScale * 4, y + height - heiScale * 3, widScale * 2, heiScale, color);

    // mau nen
    drawBlock(x + widScale * 4, y + heiScale * 2, width - widScale * 8, heiScale, bgColor);
    drawBlock(x + widScale * 4, y + height - heiScale * 3, width - widScale * 8, heiScale, bgColor);

    drawBlock(x + widScale * 3, y + heiScale * 3, width - widScale * 6, heiScale, bgColor);
    drawBlock(x + widScale * 2, y + heiScale * 4, width - widScale * 4, height - heiScale * 8, bgColor);
    drawBlock(x + widScale * 3, y + height - heiScale * 4, width - widScale * 6, heiScale, bgColor);

}


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

////////////25/10
void Draw::drawIcon(SHORT x, SHORT y, SHORT width, SHORT height, int color, int background) {
    for (int i = 0; i < width - 2; i++) {
        createColorBlock(x + i, y, color, color, " ");
        createColorBlock(x + i, y + height, color, color, " ");
    }
    
    for (int i = 0; i < width + 2; i++) {
        if (x + i - 2 < x + 2 || x + i - 2 >= x + width - 4) {
            createColorBlock(x + i - 2, y + 1, color, color, " ");
            createColorBlock(x + i - 2, y + height - 1, color, color, " ");
        }
        else {
            createColorBlock(x + i - 2, y + 1, background, background, " ");
            createColorBlock(x + i - 2, y + height - 1, background, background, " ");
        }
    }

    for (int i = 0; i < width + 6; i++) {
        if (x + i - 4 < x || x + i - 4 >= x + width - 2) {
            createColorBlock(x + i - 4, y + 2, color, color, " ");
            createColorBlock(x + i - 4, y + height - 2, color, color, " ");
        }
        else {
            createColorBlock(x + i - 4, y + 2, background, background, " ");
            createColorBlock(x + i - 4, y + height - 2, background, background, " ");
        }
    }

    for (int i = 0; i < height - 5; i++) {
        createColorBlock(x - 4, y + 3 + i, color, color, "  ");
        drawBlock(x - 2, y + 3 + i, width + 2, 1, background);
        createColorBlock(x + width, y + 3 + i, color, color, "  ");
    }
}

// playIcon
void Draw::drawIconPlay(SHORT x, SHORT y, SHORT width, SHORT height, int color) {

    ifstream ifs("playIcon.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width + 20, y + i * height + 7, width, height, color);
                }
            }
        }
    }

    ifs.close();
}

void Draw::drawIconLeaderBoard(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    ifstream ifs("leaderBoard.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width + 2, y + i * height + 5, width, height, color);
                }
            }
        }
    }

    ifs.close();
}

void Draw::drawIconExit(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    ifstream ifs("exit.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width + 8, y + i * height + 7, width, height, color);
                }
            }
        }
    }

    ifs.close();
}

void Draw::drawIconSave(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    ifstream ifs("save.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width + 8, y + i * height + 5, width, height, color);
                }
            }
        }
    }

    ifs.close();
}

void Draw::drawIconMusic(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    ifstream ifs("music.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width, y + i * height + 3, width, height, color);
                }
            }
        }
    }
    ifs.close();
}

void Draw::drawIconHelp(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    ifstream ifs("help.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width + 4, y + i * height + 3, width, height, color);
                }
            }
        }
    }
    ifs.close();
}

// new 
void Draw::drawInforIcon(SHORT x, SHORT y, SHORT width, SHORT height, int color) {
    ifstream ifs("iconInfor.txt");
    int row, column, tmp;
    if (ifs.is_open()) {
        ifs >> row;
        ifs >> column;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ifs >> tmp;
                if (tmp == 1) {
                    drawBlock(x + j * width, y + i * height, width, height, color);
                }
            }
        }
    }
    ifs.close();
}

