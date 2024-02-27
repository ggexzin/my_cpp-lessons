#include <iostream>
using namespace std;



/**
 * @brief Função q calcula a soma dos numeros até um determinado limite
 * @param limite - limite para a soma
 * @return int soma dos numeros até ao limite
*/
int somaNum(int limite){
    int soma = 0;
    for(int x=1; x<=limite; x++ ){
            soma += x;
        }
        return soma;
        
   
}

int getlimite(){
    int limite;
    cout <<"Escolha o limite a calcular: ";
    cin >> limite;
    return limite;
}



int main(){
    system("clear");
    int limite;
    limite = getlimite();
    cout << "Total soma: " << somaNum(limite) << endl;
    return 0;
}