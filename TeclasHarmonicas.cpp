#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>


using namespace std;

//string nome;


void setFullscreen() {
	keybd_event(VK_MENU,0x36,0,0);
    keybd_event(VK_RETURN,0x1C,0,0);
    keybd_event(VK_RETURN,0x1C,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}


void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void desenhoTecla(char letra){
	int linha = 20;
	int coluna = 95;

	switch(letra)
	{
	case 'A':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |      __      | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |     /  |     | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |    / /| |    | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   / ____ |   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| | _/ /    | |_ | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| ||____|  |____|| |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;
	case 'B':
		gotoxy(coluna,linha + 0);
 	 	 cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |   ______     | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  |_   _ |    | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |    | |_) |   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |    |  __'.   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |   _| |__) |  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  |_______/   | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;
	case 'C':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
	   	cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |     ______   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |   .' ___  |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  / .'   |_|  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |  | |         | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  | `.___.'|  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |   `._____.'  | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;
	case 'D':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  ________    | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_   ___ `.  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   | |   `. | | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   | |    | | | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _| |___.' | | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |________.'  | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;
	case 'E':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  _________   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_   ___  |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   | |_  |_|  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   |  _|  _   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _| |___| |  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |_________|  | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'F':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  _________   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_   ___  |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   | |_  |_|  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   |  _|      | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _| |_       | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |_____|      | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'G':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |    ______    | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  .' ___  |   | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| | / .'   |_|   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| | | |    ____  | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| | | `.___]  _| | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  `._____.'   | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";

		break;

	case 'H':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  ____  ____  | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_   ||   _| | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   | |__| |   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   |  __  |   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _| |  | |_  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |____||____| | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";

		break;
	case 'I':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |     _____    | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |    |_   _|   | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |      | |     | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |      | |     | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |     _| |_    | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |    |_____|   | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'J':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |     _____    | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |    |_   _|   | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |      | |     | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   _  | |     | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  | |_' |     | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  `.___.'     | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;

	case 'K':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  ___  ____   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_  ||_  _|  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   | |_/ /    | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   |  __'.    | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _| |  | |_  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |____||____| | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'L':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |   _____      | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  |_   _|     | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |    | |       | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |    | |   _   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |   _| |__| |  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  |________|  | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'M':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| | ____    ____ | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| ||_   \\  /   _|| |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  |   \\/   |  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |  | |\\  /| |  | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| | _| |_\\/_| |_ | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| ||_____||_____|| |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'N':
		gotoxy(coluna,linha + 0);
		cout << " .-----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| | ____  _____  | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| ||_   \\|_   _| | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  |   \\ | |   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |  | |\\ \\| |   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| | _| |_\\   |_  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| ||_____|\\____| | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'O':
			gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |     ____     | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |   .'    `.   | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  /  .--.  \\  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |  | |    | |  | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  \\  `--'  /  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |   `.____.'   | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'P':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |   ______     | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  |_   __ \\   | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |    | |__) |  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |    |  ___/   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |   _| |_      | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  |_____|     | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'Q':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |    ___       | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  .'   '.     | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| | /  .-.  \\    | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| | | |   | |    | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| | \\  `-'  \\_   | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  `.___.\\__|  | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'R':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  _______     | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_   __ \\    | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   | |__) |   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   |  __ /    | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _| |  \\ \\_  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |____| |___| | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;

	case 'S':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |    _______   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |   /  ___  |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  |  (__ \\_|  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   '.___`-.   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  |`\\____) |  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  |_______.'  | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;

	case 'T':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  _________   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |  _   _  |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| | |_| | | |_|  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |     | |      | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |    _| |_     | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |   |_____|    | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;
	case 'U':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  ___    ___  | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  | |    | |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  | |    | |  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |  | '    ' |  | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |   \\ `--' /   | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |    `.__.'    | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'V':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| | ____   ____  | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| ||_  _| |_  _| | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  \\ \\   / /   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |   \\ \\ / /    | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |    \\ ' /     | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |     \\_/      | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'W':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| | _____  _____ | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| ||_   _||_   _|| |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  | | /\\ | |  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |  | |/  \\| |  | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  |   /\\   |  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  |__/  \\__|  | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'X':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  ____  ____  | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_  _||_  _| | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   \\ \\  / /   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |    > `' <    | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |  _/ /'`\\ \\_  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| | |____||____| | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'Y':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  ____  ____  | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |_  _||_  _| | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |   \\ \\  / /   | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |    \\ \\/ /    | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |    _|  |_    | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |   |______|   | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	case 'Z':
		gotoxy(coluna,linha + 0);
	 	cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |   ________   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| |  |  __   _|  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| |  |_/  / /    | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |     .'.' _   | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |   _/ /__/ |  | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |  |________|  | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
 		cout << " '----------------'\n";
		break;
	
	case '2':
		gotoxy(coluna,linha + 0);
		cout << " .----------------.\n";
		gotoxy(coluna,linha + 1);
		cout << "| .--------------. |\n";
		gotoxy(coluna,linha + 2);
		cout << "| |  _________   | |\n";
		gotoxy(coluna,linha + 3);
		cout << "| | |  _   _  |  | |\n";
		gotoxy(coluna,linha + 4);
		cout << "| | |_| | | |_|  | |\n";
		gotoxy(coluna,linha + 5);
		cout << "| |     | |      | |\n";
		gotoxy(coluna,linha + 6);
		cout << "| |    _| |_     | |\n";
		gotoxy(coluna,linha + 7);
		cout << "| |   |_____|    | |\n";
		gotoxy(coluna,linha + 8);
		cout << "| |              | |\n";
		gotoxy(coluna,linha + 9);
		cout << "| '--------------' |\n";
		gotoxy(coluna,linha + 10);
		cout << " '----------------'\n";
		break;
	default:
		break;
	}
}

void coracoes(int life){
	int col = 200;
	int lin = -1;
	if (life == 1){
		gotoxy(col, lin + 1);
		cout << " _  _" << endl;
		gotoxy(col, lin + 2);
		cout << "/ \\/ \\" << endl;
		gotoxy(col, lin + 3);
		cout << "\\    /" << endl;
		gotoxy(col, lin + 4);
		cout << " \\  /" << endl;
		gotoxy(col, lin + 5);
		cout << "  \\/" << endl;
	}else if (life == 2){
		gotoxy(col - 5, lin + 1);
		cout << " _  _" << endl;
		gotoxy(col - 5, lin + 2);
		cout << "/ \\/ \\" << endl;
		gotoxy(col - 5, lin + 3);
		cout << "\\    /" << endl;
		gotoxy(col - 5, lin + 4);
		cout << " \\  /" << endl;
		gotoxy(col - 5, lin + 5);
		cout << "  \\/" << endl;
		
		gotoxy(col, lin + 1);
		cout << " _  _" << endl;
		gotoxy(col, lin + 2);
		cout << "/ \\/ \\" << endl;
		gotoxy(col, lin + 3);
		cout << "\\    /" << endl;
		gotoxy(col, lin + 4);
		cout << " \\  /" << endl;
		gotoxy(col, lin + 5);
		cout << "  \\/" << endl;
		
	}else if(life == 3){
		
		gotoxy(col - 10, lin + 1);
		cout << " _  _" << endl;
		gotoxy(col - 10, lin + 2);
		cout << "/ \\/ \\" << endl;
		gotoxy(col - 10, lin + 3);
		cout << "\\    /" << endl;
		gotoxy(col - 10, lin + 4);
		cout << " \\  /" << endl;
		gotoxy(col - 10, lin + 5);
		cout << "  \\/" << endl;

		gotoxy(col - 5, lin + 1);
		cout << " _  _" << endl;
		gotoxy(col - 5, lin + 2);
		cout << "/ \\/ \\" << endl;
		gotoxy(col - 5, lin + 3);
		cout << "\\    /" << endl;
		gotoxy(col - 5, lin + 4);
		cout << " \\  /" << endl;
		gotoxy(col - 5, lin + 5);
		cout << "  \\/" << endl;
		
		gotoxy(col, lin + 1);
		cout << " _  _" << endl;
		gotoxy(col, lin + 2);
		cout << "/ \\/ \\" << endl;
		gotoxy(col, lin + 3);
		cout << "\\    /" << endl;
		gotoxy(col, lin + 4);
		cout << " \\  /" << endl;
		gotoxy(col, lin + 5);
		cout << "  \\/" << endl;
	}else{
		gotoxy(col - 5, lin + 1);
		cout << "PERDEU CARAI";
	}
	
	
}

void jogar(int difi){
	
	//prepara a função rand()
	srand(static_cast<unsigned int>(time(NULL)));
	
	//variaveis para monitorar pontuação, vidas e etc...
	int pontos = 0;
	int life = 3;
	int  jogou = 1;
    char currentKey;
    char userInput;
    bool correct = true;


    while (correct) {

		//gera uma letra maiuscula aleatoria
        currentKey = static_cast<char>('A' + rand() % 26);
		
		//bota uma cor no terminal
		system("COLOR 08");

		
		//verifica se a pessoa jogou
		if(jogou > 1){
			life--;
		}

		//limpa o terminal para atualizar os corações caso não tenha jogado ou apertado errado
		system("cls");
		coracoes(life);
		desenhoTecla(currentKey);
		
		//controle para saber se o jogador efetuou a jogada
		jogou++;

		cout << "\nvoce digitou2: " << userInput << endl;
		cout << "jogou é igual a: " << jogou << endl;
		cout << "Life é igual a: " << life << endl;
		cout << "seus pontos são: " << pontos << endl;

		
		//verifica as vidas do jogador
		if(life == 0){
			system("COLOR C7");
			cout << "VC PERDEU CORNO\n";
			correct = false;
		}
		
		//Verifica a dificuldade que o jogador escolheu
		if(difi == 1){
			Sleep(2000);

		}else if(difi == 2){
			Sleep(1500);
		}else if(difi == 3){
			Sleep(1000);
		}else{
			Sleep(1000);

		}
		
		//monitora as teclas que o jogador está apertando
		if (_kbhit()) {
			
            userInput = _getch(); 
			//Transforma as teclas em maiusculo(caso o capslock não esteja ativado)
			userInput = toupper(userInput);
            
			//verifica se a tecla apertada está correta
			if(userInput != currentKey){
				Sleep(200);
				system("COLOR C7");
				jogou = 1;
				life--;

			}else{
				Sleep(200);
				pontos = pontos + 10;
				system("COLOR 20");
				cout << "sempre apareço";
				cout << "pressionada: " << userInput << endl;
				jogou = 1;
			}
			
       
        }
        
    }

    cout << "Fim do jogo." << endl;
	
}

//tela de como jogar
void comoJogar(){
	cout << "Esse é o tutorial de como jogar :)\n";
	system("Pause");

}


//Menu dinamico do jogo
void menu(int opc){
	system("cls");
	int lin = 20;
	int col = 95;


	gotoxy(col,lin + 1);
	cout << "#################\n";
	gotoxy(col,lin + 2);
	cout << "Teclas harmonicas\n";
	gotoxy(col,lin + 3);
	cout << "#################\n";

	gotoxy(col,lin + 4);
	cout << (opc == 1 ? "> " : "  ") << "[1] JOGAR" << endl;
	gotoxy(col,lin + 5);
    cout << (opc == 2 ? "> " : "  ") << "[2] RANKING" << endl;
	gotoxy(col,lin + 6);
    cout << (opc == 3 ? "> " : "  ") << "[3] CONFIGURAÇÕES" << endl;
	gotoxy(col,lin + 7);
    cout << (opc == 4 ? "> " : "  ") << "[4] COMO JOGAR" << endl;
	gotoxy(col,lin + 8);
    cout << (opc == 5 ? "> " : "  ") << "[5] SAIR" << endl;
	
}

//menu para escolher a opção de dificuldade
void menuJogo(int opc){
	system("cls");
	int lin = 20;
	int col = 95;

	gotoxy(col,lin + 1);
	cout << "#################\n";
	gotoxy(col,lin + 2);
	cout << "Escolha a dificuldade de jogo\n";
	gotoxy(col,lin + 3);
	cout << "#################\n";

	gotoxy(col,lin + 4);
	cout << (opc == 1 ? "> " : "  ") << "[1] FACIL" << endl;
	gotoxy(col,lin + 5);
    cout << (opc == 2 ? "> " : "  ") << "[2] MEDIO" << endl;
	gotoxy(col,lin + 6);
    cout << (opc == 3 ? "> " : "  ") << "[3] DIFICIL" << endl;
	gotoxy(col,lin + 7);
    cout << (opc == 4 ? "> " : "  ") << "[4] VOLTAR" << endl;

}

void jogo(){
	
	char tecla;
	int opc = 1;

	while (opc != 100)
	{
		menuJogo(opc);

		tecla = _getch();

		if(tecla == 72){
			if(opc > 1){
				opc--;
			}
		}else if(tecla == 80){
			if(opc < 4){
				opc++;
			}
		}else if(tecla == 13){

			switch (opc){
				case 1:
					system("cls");
					jogar(1);
					break;
				case 2:
					system("cls");
					jogar(2);
					break;
				case 3:
					system("cls");
					jogar(3);
					
					break;
				case 4:
					system("cls");
					opc = 100;
					cout << "adeus :)";
					break;
				default:
					cout << "opção não existe :)";
					break;
			}
		}
		
		
	}
	
	


}

int main(){
	
	//deixar a linguagem padrão Brasil
	setlocale(LC_ALL, "pt_BR.utf8");

	//função para inicar o jogo em tela cheia
	setFullscreen();
	//Em alguns casos o CMD não funiona o setlocale, então tem que rodar esse comando
	system("chcp 65001");
	system("cls");

	// variaveis para opção e ver a tecla digitada
	int opc = 1;
	char tecla;


	while (opc != 1000)
	{
		menu(opc);

		tecla = _getch();
		//verifica a tecla apertada, setinha para cima ou para baixo e enter
		if(tecla == 72){
			if(opc > 1){
				opc--;
			}
		}else if(tecla == 80){
			if(opc < 5){
				opc++;
			}
		}else if(tecla == 13){

			switch (opc){
				case 1:
					system("cls");
					jogo();
					break;
				case 2:
					system("cls");
					cout << "opc 2";
					break;
				case 3:
					system("cls");
					cout << "opc 3";
					break;
				case 4:
					system("cls");
					comoJogar();
					break;
				case 5:
					system("cls");
					opc = 1000;
					cout << "adeus :)";
					break;
				
				default:
					cout << "opção não existe :)";
					break;
			}
		}

	}
	
    return 0;
}



// if(tecla == 46){
// 			cout << "vc digitou um ponto";
// 			system("Pause");
// 		}else 