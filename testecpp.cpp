#include <iostream>
using namespace std;

void comecar(){
    string escolha;
    cout << "                                                   Press 'Enter' to continue" << endl;
    cin.ignore();
    getline(cin, escolha);
    system("clear");
};

void exibirtexto(){
    cout << "                                                  Dados eletronico - No âmbito do módulo" << endl;
    cout << "                                       Programação C/C++ Estruturas básicas e Conceitos Fundamentais" << endl;
    cout << "                                                               ENTA - 2024" << endl;
};

void dado(){
    int sorteio;
    srand(time(NULL));
    sorteio = rand() % 6 + 1;

    if (sorteio == 1)
    {
     cout << endl;
    cout << endl;
    cout << endl;
     cout <<"                                                                    *" << endl;
    }

       if (sorteio == 2)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout <<"                                                                    **" << endl;
    }

       if (sorteio == 3)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "                                                                   ***" << endl;
    }

       if (sorteio == 4)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout <<"                                                                  ****" << endl;
    }

       if (sorteio == 5)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout <<"                                                                  *****" << endl;
    }

       if (sorteio == 6)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout <<"                                                                 ******" << endl;
    }

    
};

void tentativas(){
    cout << endl;
    cout << endl;
    int tentativas = 0;
    tentativas ++;
    cout << "                                                               Tentativas: " << tentativas << endl;
}

// bool voltarajgr(){
//     string escolha;
//     cout << "                                                        Press 'Enter' to try again" << endl;
//     cin.ignore();
//     getline(cin, escolha);
//     return dado();
// }

int main(){
    system("clear");
    comecar();
    exibirtexto();
    dado();
    tentativas();
    //voltarajgr();
    //return 0;
}