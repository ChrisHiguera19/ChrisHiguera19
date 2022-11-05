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
    string usuario="abc", cla;
    string clave= "123",usu;
    int intentos=1;
    int opc;
    
        // captura de datos
    //la captura de datos se encuentra dentro de la caja de do.
 
    do
    {
        system("cls");
        cout<<"Ingrese su usuario......."; cin>>usu;
        cout<<"Ingrese una contraseña....."; cin>>cla;
        
        if(usu==usuario && cla==clave)
        {
            cout<<"Bienvenido"<<endl;
            intentos=4;
            
            cout<<"|-------------------------------------------|"<<endl; 
            cout<< "|   ALMACENES EL TRIUNFO          |"<<endl   ;
            cout<<"|-------------------------------------------|";
            cout<<"\n";
            cout<<"| 1. Ingrese un producto           |"<<endl;
            cout<<endl<<"| 2. Lista de productos en el carrito     |;"<<endl;
            cout<<"|-----------------------------------|"<<endl;
            cout<<"\n"<<endl;
            
            cout<<endl<<"seleccione una operación"; cin>>opc;
            
            
            
            
            
        getch();    
            
        }
        else
        {
          cout<< "Usuario o contraseña errados";
          cout<< "Tienes" <<intentos<< "de 3 intentos";
          intentos++;
        }
        
    }while(intentos<=3);
    cout<<endl<<"Chao, gracias";
    getch();
    
    {
        cout<<"Muchas por entrar a nuestra linea de supermecados.Adiós";
        
        
    }
    return 0;
}