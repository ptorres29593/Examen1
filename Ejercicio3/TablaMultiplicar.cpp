/**
* @file TablaMultiplicar.cpp
* @brief Hacer un programa que muestre la tabla de multiplicar del numero ingresado por el usuario
* @author Pablo Torres
* @date 09/02/2023
*/

#include <iostream>

using namespace std;

int main()
{
    
    int multiplo;
    int resultado;

    cout<<"Programa que te indica la tabla de multiplicar del numero deseado"<<endl;

    cout<<"Ingresa el numero cuya tabla de multiplicar quieras saber"<<endl;
    cout<<"--";
    cin>>multiplo;

    for (int i=0; i<=10; i++) {
    	resultado=multiplo*i;
    	cout<<multiplo<<" X "<<i<<" = "<<resultado<<endl;
    }
    
    return 0;
}