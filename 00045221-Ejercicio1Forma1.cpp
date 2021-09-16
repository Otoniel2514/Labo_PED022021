//Realizar un programa de la multiplicacion de dos numeros en forma de suma recursiva.
#include "iostream"
using namespace std;

void imprimirSuma(int dato1, int dato2){
if (dato2 >0){
    cout<<dato1;
    if(dato2 > 1){
        cout<<"+";
    }
    imprimirSuma(dato1,dato2-1);
    }
};
int main(void){
    int dato1,dato2;

    cout<<"Ingrese el primer numero entero a multiplicar: ";
    cin>>dato1;
    cout<<"Ingrese el segundo numero entero a multiplicar: ";
    cin>>dato2;

    cout<<dato1<<"x"<<dato2<<"=";
    imprimirSuma(dato1,dato2);
}