#include <iostream>

using namespace std;

int somanumeros(int x, int y){
    return x+y;
}


double somanumeros(double x, double y){
return x+y;

}



int soma (int k){
    if ( k>0){
return k+ soma (k-1);
    }else{
        return 0;
}
}




int main(){
    int resultado = soma(5);
    cout << resultado << "/n";

return 0;

}

