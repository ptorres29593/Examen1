/**
* @file TablaMultiplicar.cpp
* @brief Hacer un programa que muestre la tabla de multiplicar del numero ingresado por el usuario
* @author Pablo Torres
* @date 09/02/2023
*/

#include <iostream>

using namespace std;
void mostrarTabla(int);

/**
* @brief La siguiente funcion muestra la tabla de multiplicar hasta el 10 de cualquier número
* @param numero entero
* @returns muestra solo en consola y no devuelve ningun valor
*/

void mostrarTabla(int mult){
    int resultado;

    for (int i=1; i<=10; i++) {
        
        resultado=mult*i;
        cout<<mult<<" X "<<i<<" = "<<resultado<<" ";
        
        if ((i%2)==0){
            cout<<endl;
        }
    }
}

int main()
{
    
    int multiplo;

    cout<<"Programa que te indica la tabla de multiplicar del numero deseado"<<endl;

    cout<<"Ingresa el numero cuya tabla de multiplicar quieras saber"<<endl;
    cout<<"--";
    cin>>multiplo;

    mostrarTabla(multiplo);

    return 0;
}