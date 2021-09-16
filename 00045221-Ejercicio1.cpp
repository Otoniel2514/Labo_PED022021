//Realizar un programa de la multiplicacion de dos numeros en forma de suma recursiva.
#include "iostream"
using namespace std;

//Prototipos de la funcion
int ImprimirProducto(int dato1, int dato2)
{
    if(dato2 == 1)
        return dato1;
    if(dato2 > 0)
    {
        return dato1 + ImprimirProducto(dato1,dato2-1);
    }else{
            return -dato1+ImprimirProducto(dato1,dato2+1);
        }
    return (0);
}
int main()
{
    int dato1,dato2;
    cout<<"Ingrese el primer numero entero a multiplicar: ";
    cin>>dato1;
    cout<<"Ingrese el segundo numero entero a multiplicar: ";
    cin>>dato2;
    cout<<dato1<<"*"<<dato2<<"="<<ImprimirProducto(dato1, dato2)<<endl;
}

