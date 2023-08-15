#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;



int main(){
    srand(static_cast<unsigned int>(time(NULL)));

    char currentKey;
    char userInput;
    bool correct = true;

    while (correct) {
        // Gera uma tecla aleatória (letras maiúsculas de A a Z)
        currentKey = static_cast<char>('A' + rand() % 26);

        cout << "Pressione a tecla: " << currentKey << endl;

        // Aguarda a entrada do usuário
        userInput = _getch();

        if (userInput == currentKey) {
            cout << "Acerto!" << endl;
        } else {
            cout << "Erro! Tecla correta era: " << currentKey << endl;
            correct = false;
        }
    }

    cout << "Fim do jogo." << endl;
    return 0;
}