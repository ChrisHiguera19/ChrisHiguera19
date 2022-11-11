#include <iostream>
#include <conio.h>//getch(), pausa
#include <stdlib.h>//system("cls")limpiar

using namespace std;

void captura_suma();
void captura_resta();

int main()
{
	captura_suma();
	captura_resta();
	
 return 0;
}

void captura_suma()
{
	int	v1, v2, st;
	cout<<"Ingrese un valor..."; cin>>v1;
	cout<<"Ingrese  otro valor..."; cin>> v2;
	st= v1+v2;
	system("cls");
	cout<<"la suma de " <<v1<< " + " <<v2<< "es igual a " <<st <<endl;
	
	getch();
	system("cls");
	
}

void captura_resta()
{
	int r1, r2,op, res;
	
	cout<<"Ingrese un valor: "; cin>>r1;
	cout<<"Ingrese otro valor: "; cin>>r2;
	op: r1 - r2;
	cout<<"el resultado de "<<r1<< " - " <<r2<< " = " <<op;
	
}
