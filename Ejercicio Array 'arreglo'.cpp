#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//Declaración de variables

	int a[5], b1[5], b2[5];
	
	//captura de datos
		//variable a
		cout<<"cual va a hacer el valor que le vas a asignar a 'a[0]': "; cin>> a[0] ;
		cout<<"cual va a hacer el valor que le vas a asignar a 'a[1]': "; cin>> a[1] ;
		cout<<"cual va a hacer el valor que le vas a asignar a 'a[2]': "; cin>> a[2];
		cout<<"cual va a hacer el valor que le vas a asignar a 'a[3]': "; cin>> a[3] ;
		cout<<"cual va a hacer el valor que le vas a asignar a 'a[4]': "; cin>> a[4] ;
	
		//variable b1
		cout<<"cual va a hacer el valor que le vas a asignar a b1[0]: "; cin>> b1[0] ;
		cout<<"cual va a hacer el valor que le vas a asignar a b1[1]: "; cin>> b1[1] ;
		cout<<"cual va a hacer el valor que le vas a asignar a b1[2]: "; cin>> b1[2] ;
		cout<<"cual va a hacer el valor que le vas a asignar a b1[3]: "; cin>> b1[3] ;
		cout<<"cual va a hacer el valor que le vas a asignar a b1[4]: "; cin>> b1[4] ;
		 
	//Imprimir datos
	cout<< a[0] + b1[0]<<endl;
	cout<< a[1] + b1[1]<<endl;
	cout<< a[2] + b1[2]<<endl;
	cout<< a[3] + b1[3]<<endl;
	cout<< a[4] + b1[4]<<endl;

	
	
	return 0;
}//fin del programa
