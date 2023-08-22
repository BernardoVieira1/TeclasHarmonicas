//PARA USAR C++
#include <iostream>

//HABILITA AS FUNÇÕES _kbhit() E _getch()
#include <conio.h>
//HABILITAR O USO DA FUNÇÃO SYSTEM()
#include <stdlib.h>

//PARA PODER USAR PRORPIEDADES EXTRAS QUE O WINDOS POSSIBILITA, ALTERAR O TERMINAL, POSIÇÃO, CORES...
#include <windows.h>
#include <string.h>
//HABILITAR CARACTERES ESPECIAIS
#include <locale.h>
#include <fstream>
//BIBLIOTECA USADA PARA O AJUDAR NO TEMPO DO JOGO
#include <ctime>
#include <time.h>


using namespace std;

//COIDGO PARA ATIVAR AS CORES NO TERMINAL
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

string nome;

//FUNÇÃO PARA DEIXAR O CMD EM TELA CHEIA
void setFullscreen() {
	keybd_event(VK_MENU,0x36,0,0);
    keybd_event(VK_RETURN,0x1C,0,0);
    keybd_event(VK_RETURN,0x1C,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

//FUNÇÃO PARA POSICIONAR OS ELEMENTOS EM DETERMINADO CANTO DA TELA
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//A PARTITR DA LETRA GERADA LAEATORIAMENTE, ELA ENTRA NO SWITCH E É TRANSFORMADA EM DESENHO
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

//AQUI È ONDE FICA A AMOSTRAGEM DOS CORAÇÕES
void coracoes(int life){
	int col = 200;
	int lin = -1;
	if (life == 1){
		SetConsoleTextAttribute(hConsole, 12);
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
		SetConsoleTextAttribute(hConsole, 7);
	}else if (life == 2){
		SetConsoleTextAttribute(hConsole, 12);
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
		SetConsoleTextAttribute(hConsole, 7);
		
	}else if(life == 3){
		
		SetConsoleTextAttribute(hConsole, 12);
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
		SetConsoleTextAttribute(hConsole, 7);
	}else{
		gotoxy(col - 5, lin + 1);
		cout << "ACABOU AS VIDAS";
	}
	
	
}

//TELA PARA QUANDO O JOGADOR PERDE
void gameover(){
	system("cls");
	int lin = 20;
	int col = 95;
	gotoxy(col + - 20, lin + 0);
	cout << " ####      ##     ##   ##  #######            #####   ##   ##  #######  ######" << endl;
	gotoxy(col + - 20, lin + 1);
	cout << "##  ##    ####    ### ###   ##   #           ##   ##  ##   ##   ##   #   ##  ##" << endl;
	gotoxy(col + - 20, lin + 2);
	cout << "##       ##  ##   #######   ## #             ##   ##   ## ##    ## #     ##  ##" << endl;
	gotoxy(col + - 20, lin + 3);
	cout << "##       ##  ##   #######   ####             ##   ##   ## ##    ####     #####" << endl;
	gotoxy(col + - 20, lin + 4);
	cout << "##  ###  ######   ## # ##   ## #             ##   ##    ###     ## #     ## ##" << endl;
	gotoxy(col + - 20, lin + 5);
	cout << " ##  ##  ##  ##   ##   ##   ##   #           ##   ##    ###     ##   #   ##  ##" << endl;
	gotoxy(col + - 20, lin + 6);
	cout << "  #####  ##  ##   ##   ##  #######            #####      #     #######  #### ##" << endl;
}

//LOCAL ONDE DE FATO OCORRE AS REGRAS PARA O JOGO FUNCIONAR
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

	//INICIA VARIAVEIS PARA CALCULAR O TEMPO	
	time_t start_time, end_time;
    double elapsed_time;
    int running = 0;
	
	//COMEÇA A CONTAR O TEMPO QUE O JOGADOR VAI LEVAR
	time(&start_time);
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

		gotoxy(0,0);
		cout << "seus pontos são: " << pontos << endl;

		
		//verifica as vidas do jogador
		if(life == 0){
			system("COLOR 07");

			//FINALIZA O TEMPORIZADOR
			time(&end_time);

			//PEGA A DIFERENÇA DE TEMPO ENTRE O INICIO E O FIM
			elapsed_time = difftime(end_time, start_time);

			//APRESENTAÇÃO FINAL COM TELA DE GAMEOVER
			gameover();
			cout << nome << endl;
			cout << "VOCÊ FEZ " << pontos << " PONTOS." << endl;
			printf("COM O TEMPO DE: %.2f segundos\n", elapsed_time);
			system("pause");
			
			correct = false;
		}
		
		//Verifica a dificuldade que o jogador escolheu
		if(difi == 1){
			Sleep(2000);

		}else if(difi == 2){
			Sleep(1000);
		}else if(difi == 3){
			Sleep(500);
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
				system("COLOR 47");
				jogou = 1;
				life--;

			}else{
				Sleep(200);
				pontos = pontos + 10;
				system("COLOR 20");
				cout << "pressionada: " << userInput << endl;
				jogou = 1;
			}
			
       
        }
        
    }

    cout << "Fim do jogo." << endl;
	
}

//tela de como jogar
void comoJogar()
{
	int lin = 20;
	int col = 95;
	gotoxy(col + - 50, lin - 13);
	cout << "####                                          ####                                                         ####" << endl;
	gotoxy(col + - 50, lin - 12);
	cout << "##  ##                                          ##                                                         ##  ##" << endl;
	gotoxy(col + - 50, lin - 11);
	cout << "##        ####    ##  ##    ####                 ##    ####     ### ##   ####    ######                         ##" << endl;
	gotoxy(col + - 50, lin - 10);
	cout << "##       ##  ##   #######  ##  ##                ##   ##  ##   ##  ##       ##    ##  ##                       ##" << endl;
	gotoxy(col + - 50, lin - 9);
	cout << "##       ##  ##   ## # ##  ##  ##            ##  ##   ##  ##   ##  ##    #####    ##                          ##" << endl;
	gotoxy(col + - 50, lin - 8);
	cout << " ##  ##  ##  ##   ##   ##  ##  ##            ##  ##   ##  ##    #####   ##  ##    ##                            " << endl;
	gotoxy(col + - 50, lin - 7);
	cout << "  ####    ####    ##   ##   ####              ####     ####        ##    #####   ####                         ##" << endl;
	gotoxy(col + - 50, lin - 6);
	cout << "                                                                #####                                           " << endl;

	gotoxy(col + - 10, lin - 2 );
	cout << " O jogador tera tres coracoes (vidas), caso o numero de coracoes acabem, o jogador perdera o jogo." << endl;
	gotoxy(col + - 10 , lin - 1 );
	cout << " O jogo consiste em que o jogador digite (uma unica vez) a tecla que aparecera na tela." << endl;
	system("pause");

}


//Menu dinamico do jogo
void menu(int opc){
	system("cls");
	int lin = 20;
	int col = 95;


	
	gotoxy(col - 65, lin - 13);
	cout << "######   #######    ####   ####       ##      #####            ##   ##    ##     ######   ##   ##   #####   ##   ##   ####      ####     ##      ##### \n";
	gotoxy(col - 65, lin - 12);
	cout << "# ## #    ##   #   ##  ##   ##       ####    ##   ##           ##   ##   ####     ##  ##  ### ###  ##   ##  ###  ##    ##      ##  ##   ####    ##   ## \n";
	gotoxy(col - 65, lin - 11);
	cout << "  ##      ## #    ##        ##      ##  ##   #                 ##   ##  ##  ##    ##  ##  #######  ##   ##  #### ##    ##     ##       ##  ##   #      \n";
	gotoxy(col - 65, lin - 10);
	cout << "  ##      ####    ##        ##      ##  ##    #####            #######  ##  ##    #####   #######  ##   ##  ## ####    ##     ##       ##  ##    ##### \n";
	gotoxy(col - 65, lin - 9);
	cout << "  ##      ## #    ##        ##   #  ######        ##           ##   ##  ######    ## ##   ## # ##  ##   ##  ##  ###    ##     ##       ######        ## \n";
	gotoxy(col - 65, lin - 8);
	cout << "  ##      ##   #   ##  ##   ##  ##  ##  ##   ##   ##           ##   ##  ##  ##    ##  ##  ##   ##  ##   ##  ##   ##    ##      ##  ##  ##  ##   ##   ## \n";
	gotoxy(col - 65, lin - 7);
	cout << " ####    #######    ####   #######  ##  ##    #####            ##   ##  ##  ##   #### ##  ##   ##   #####   ##   ##   ####      ####   ##  ##    ##### \n";


	gotoxy(col,lin + 4);
	cout << (opc == 1 ? "> " : "  ") << "[1] JOGAR" << endl;
	gotoxy(col,lin + 5);
    cout << (opc == 2 ? "> " : "  ") << "[4] COMO JOGAR" << endl;
	gotoxy(col,lin + 6);
    cout << (opc == 3 ? "> " : "  ") << "[5] SAIR" << endl;
	
}

//menu para escolher a opção de dificuldade
void menuJogo(int opc){
	system("cls");
	int lin = 20;
	int col = 95;

	gotoxy(col-85, lin - 13);
	cout << " #######   #####     ####    #####   ####     ##   ##    ##                ##              #####     ####    #######   ####      ####   ##   ##  ####     #####      ##     #####     ####### " << endl;
	gotoxy(col-85, lin - 12);
	cout << " ##   #   ##   ##   ##  ##  ##   ##   ##      ##   ##   ####              ####              ## ##     ##      ##   #    ##      ##  ##  ##   ##   ##       ## ##    ####     ## ##    ##   # " << endl;
	gotoxy(col-85, lin - 11);
	cout << " ## #     #        ##       ##   ##   ##      ##   ##  ##  ##            ##  ##             ##  ##    ##      ## #      ##     ##       ##   ##   ##       ##  ##  ##  ##    ##  ##   ## # " << endl;
	gotoxy(col-85, lin - 10);
	cout << " ####     #####    ##       ##   ##   ##      #######  ##  ##            ##  ##             ##  ##    ##      ####      ##     ##       ##   ##   ##       ##  ##  ##  ##    ##  ##   #### " << endl;
	gotoxy(col-85, lin - 9);
	cout << " ## #          ##  ##       ##   ##   ##   #  ##   ##  ######            ######             ##  ##    ##      ## #      ##     ##       ##   ##   ##   #   ##  ##  ######    ##  ##   ## # " << endl;
	gotoxy(col-85, lin - 8);
	cout << " ##   #   ##   ##   ##  ##  ##   ##   ##  ##  ##   ##  ##  ##            ##  ##             ## ##     ##      ##        ##      ##  ##  ##   ##   ##  ##   ## ##   ##  ##    ## ##    ##   # " << endl;
	gotoxy(col-85, lin - 7);
	cout << " #######   #####     ####    #####   #######  ##   ##  ##  ##            ##  ##            #####     ####    ####      ####      ####    #####   #######  #####    ##  ##   #####    ####### " << endl;


	gotoxy(col,lin + 4);
	cout << (opc == 1 ? "> " : "  ") << "[1] FACIL" << endl;
	gotoxy(col,lin + 5);
    cout << (opc == 2 ? "> " : "  ") << "[2] MEDIO" << endl;
	gotoxy(col,lin + 6);
    cout << (opc == 3 ? "> " : "  ") << "[3] DIFICIL" << endl;
	gotoxy(col,lin + 7);
    cout << (opc == 4 ? "> " : "  ") << "[4] VOLTAR" << endl;

}

void NnJogador(){
	cout << "DIGITE O SEU NOME: ";
	cin >> nome;
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

					NnJogador();

					jogar(1);
					break;
				case 2:
					system("cls");
					NnJogador();
					jogar(2);
					break;
				case 3:
					system("cls");
					NnJogador();
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

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

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
			if(opc < 3){
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
					comoJogar();
					break;
				case 3:
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