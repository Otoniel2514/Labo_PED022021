//Realizar una lista simplemente enlazada para guardar el id y nombre de cada libro, deben imprimirse de forma recursiva
#include "iostream"
using namespace std;

struct nodo 
{
    int idLibro;
    string NombreLibro;
    nodo *sig;
};

class Libros
{
	//atributo que contendra nuestra clase
    private:
	nodo *pInicio;

    public:
	Libros();
	void insertarEnLista(void);
	void mostrarLibros();
	void mostrarLibros(nodo *p);
};
//constructor 
Libros::Libros(void)
{
    pInicio = NULL;
}

void Libros::insertarEnLista(void)
{
	//declararacion del nuevo nodo 
	nodo *nuevo;
	nuevo = new nodo;
	cout << "ID del libro: ";
	cin >> nuevo->idLibro;
	cout << "Nombre del Libro: ";
    cin>> nuevo->NombreLibro;
	nuevo->sig = NULL;

	//lista vacia (false)
	if (!pInicio)
	{
		pInicio = nuevo;
	}
	else
	{
		nodo *aux = pInicio;

		while (aux->sig != NULL)
			aux = aux->sig;
			aux->sig = nuevo;
	}
}

void Libros::mostrarLibros()
{
	nodo *p = pInicio;
	if (!p)
		return;
	else
	{
		cout<<"ID (Identificacion del libro): " <<p->idLibro<< endl;
		cout<<"Nombre del libro: "<<p->NombreLibro <<endl<< endl;
		mostrarLibros(p->sig);
	}
}
void Libros::mostrarLibros(nodo *p)
{
	if (!p)
		return;
	else
	{
		cout<<"ID (Identificacion del libro): " << p->idLibro<<endl;
		cout<<"Nombre del libro: "<<p->NombreLibro<<endl<< endl;
		mostrarLibros(p->sig);
	}
}

int main(void)
{
	Libros libro;

	int opc = 0;
	
	do
	{
		cout<<endl;
		cout<<"==========MENU DE OPCIONES PARA ALMACENAR E IMPRIMIR LIBROS=========="<<endl;
		cout<<"1. Ingresar ID y Nombre del libro."<<endl;
		cout<<"2. Imprimir y mostrar lista de los libros."<<endl;
		cout<<"3. Salir del sitema."<<endl;
		cout<<"Ingrese la opcion que desea realizar en el sistema: "<<endl;
		cin>>opc;
	
		switch (opc)
		{
			case 1:
				cout << "Ingresando y Procesando Su Solicitud. . ." <<endl<<endl;
				libro.insertarEnLista();
				break;
			case 2:
				cout << "Imprimiendo Su Solicitud. . ." <<endl<<endl;
				libro.mostrarLibros();
				break;
			case 3:
				break;
			default:
				cout << "Opcion ingresada incorrecta, intentelo de nuevo por favor!!" << endl;
				break;
			}
		} while (opc != 3);
	return 0;
}