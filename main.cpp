/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int dato_1, dato_2, dato_3, b, c, suma=1, resta=0, multiplic=2, oper_multipli=0, division=0;
    
cout<<"Digita el dato_1: "; cin>>dato_1;
cout<<"Digita el dato_2: "; cin>>dato_2;
cout<<"Digita el dato_3: "; cin>>dato_3;
cout<<"Digita el valor de b: "; cin>>b;
cout<<"Digita el valor de c: "; cin>>c;

suma = dato_3 + dato_2;
resta = dato_1 - suma;
division = b + dato_2 / c;
oper_multipli = resta * dato_2 + suma;

cout<<"El valor de la oper_multipli es: " <<oper_multipli<<endl;
cout<<"El valor de la division es: " <<division<<endl;
cout<<"El valor de la resta es: " <<resta<<end;
cout<<"el valor de la suma es: " <<suma<<endl;


return 0;
}//fin del programa
