#include <iostream>
using namespace std;


int a, b;

int soma = a+b;
int sub = a-b;
int divisao = a/b;
int multi = a*b;
int resto = a%b;



void menu(){
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
}



int main(){

    int escolha;
    cout << "Qual o valor de a e de b" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    

    menu();

    switch (escolha)
    {
    case 1:
        cout << soma << endl;
        break;
    case 2:
        cout << sub << endl;
        break;
    case 3:
        cout << divisao << endl;
        break;
    case 4:
        cout << multi << endl;
        break;
    case 5:
        cout << resto << endl;
        break;

        default:
        cout << "Valor incorreto!" << endl;
        break;
    }




    return 0;
}



