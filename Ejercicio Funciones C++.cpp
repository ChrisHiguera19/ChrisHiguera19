#include <iostream>
#include <conio.h>//getch(), pausa
#include <stdlib.h>//system("cls")limpiar


using namespace std;

//declaración de función
void titulo();
void operacion();
void func_2_salida();
int main()
{
	//llamado
	titulo();
	operacion();
	
	
 return 0;
}//
void titulo()
{
	cout<<" \n \n \t\t MANEJO DE FUNCIONES"<<endl;	
}


void func_2_salida()
{
	cout<<" \n \n \t operación sumas "<<endl;	
}


void operacion()
{
	int m=2,n=4,b=3,c=0;
	
	//operacion
	c = m + n;	
	
	//salida
	func_2_salida();
	cout<<"la suma de "<<m <<"+" <<n << "=" <<;
	
}


