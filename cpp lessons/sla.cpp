#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int a, b;
    int escolha;

    cout << "Qual o valor de a e de b" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int soma = a + b;
    int sub = a - b;
    int divisao, multi, resto;


    multi = a * b;

    system("clear");
    cout << "====================" << endl;
    cout << "        Menu" << endl;
    cout << "====================" << endl;
    cout << "Press 1 - Soma" << endl;
    cout << "Press 2 - Subtração" << endl;
    cout << "Press 3 - Divisão" << endl;
    cout << "Press 4 - Multiplicação" << endl;
    cout << "Press 5 - Resto da Divisão" << endl;
    cout << "====================" << endl;
    cout << "Escolha uma opção: ";
    cin >> escolha;

    switch (escolha) {
    case 1:
        cout << "Resultado da soma: " << soma << endl;
        break;
    case 2:
        cout << "Resultado da subtração: " << sub << endl;
        break;
    case 3:
        cout << "Resultado da divisão: " << divisao << endl;
        break;
    case 4:
        cout << "Resultado da multiplicação: " << multi << endl;
        break;
    case 5:
        cout << "Resto da divisão: " << resto << endl;
        break;
    default:
        cout << "Valor incorreto!" << endl;
        break;
    }

if (a||b == 0)
    {
        cerr << "Erro: nao podes escolher 0" << endl;
    }else{

        
    }
    
    return 0;
}
