#include <iostream>
using namespace std;

void imprimir_un_for(){
    int i;
    for(i=0;i<10;i++){
        cout << i;
        while(i<10-1){
            cout <<",";
            break;
        }
    }
}

int main (){
    cout << "hola" << endl;
    cout << "que empiece el infierno ktm" << endl;
    cout << "Aca vemos como un for imprime cada iteracion el dato"<< endl;
    cout << "y usando un while se embellece la salida con comas" << endl;
    imprimir_un_for();
    return 0;
}
