#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
    int num = 0;
    int numTentativas = 0;
    int TentativasMaximas;
    string nomeJogador;


    cout << "Nome do jogador: ";
    cin >> nomeJogador;


    cout << "Qual o número máximo de tentativas que deseja utilizar:";
    cin >> TentativasMaximas;


    srand( unsigned (time(0)));
    int numSorte = 1 + (rand() % 100);

    cout << "Olá " << nomeJogador << endl;

    while (numSorte != num && numTentativas < TentativasMaximas) {
        cout << "Qual é o número da sorte, " << nomeJogador << "? ";
        cin >> num;
        numTentativas++; // 
        if (numSorte > num) {
            cout << "O número da sorte é maior do que " << num << endl;
        } else if (numSorte < num) {
            cout << "O número da sorte é menor do que " << num << endl;
        } else {
            cout << "Parabéns, " << nomeJogador << "! Acertas-te em " << numTentativas << " tentativas." << endl;
        }
    }

    if (numTentativas >= TentativasMaximas) {
        cout << "as tuas tentativas acabaram, " << nomeJogador << " Tentaste! o número era " << numSorte << endl;
    }


    return 0;
}