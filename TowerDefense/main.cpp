#include"main.h"

int main() {
    PlaySound(TEXT("2.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	setFullColors(15, 15);

	for (int i = 0; i < 20; i++) {
		for (int j = 10; j < 14; j++) {
			gotoXY(i, j);
			creatColorBlock(i, j, 0, 0, " ");
		}

	}
    

	setBackgroundColor(12);
	setColor(12);
    system("pause");
    
	return 0;
}