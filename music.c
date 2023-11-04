#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>

#pragma comment(lib,"winmm.lib")

int main() {
	char key;
		PlaySound(TEXT("opening.wav"), NULL, SND_ASYNC | SND_LOOP);
		while (1) {
			key = getch();
			if (key != 0) {
				PlaySound(NULL, NULL, 0);
				Sleep(2000);
				return;
			}
		}
	return 0;
}
