

/**
* @file NumMayorMenor.cpp
* @brief Hacer un programa que pida 3 números y te diga cual es el mayor y cual es el menor
* @author Pablo Torres
* @date 09/02/2023
*/

#include <iostream>

using namespace std;

int numMayor(int,int,int);
int numMenor(int,int,int);

/**
* @brief La siguiente funcion da el numero mayor de los 3 que se estan dando por medio de una cadena de if else
* @param numero entero
* @param numero entero
* @param numero entero
* @returns El parametro cuyo valor sea mayor
*/

int numMayor(int n1, int n2, int n3){
    if (n1 > n2 && n1 > n3){
        return n1;
    }else if (n2 > n1 && n2 > n3){
        return n2;
    }else {
        return n3;
    }
}

/**
* @brief La siguiente funcion da el numero menor de los 3 que se estan dando por medio de una cadena de if else
* @param numero entero
* @param numero entero
* @param numero entero
* @returns El parametro cuyo valor sea menor
*/

int numMenor(int n1, int n2, int n3){
    if (n1 < n2 && n1 < n3){
        return n1;
    }else if (n2 < n1 && n2 < n3){
        return n2;
    }else {
        return n3;
    }
}


/**
* @brief La siguiente funcion es la funcion principal y lo que hace es pedirle datos al usuario y mostrar resultados
*/

int main()
{
    
	int num1;
	int num2;
	int num3;

    cout<<"Programa que pide 3 numeros e indica cual es el mayor y cual el menor"<<endl;
    cout<<"Ingresar 3 numeros"<<endl;
    cout<<"Numero 1: ";
    cin>>num1;
    cout<<"Numero 2: ";
    cin>>num2;
    cout<<"Numero 3: ";
    cin>>num3;

    cout<<"El número mayor es el numero "<<numMayor(num1,num2,num3)<<endl;
    cout<<"El número menor es el numero "<<numMenor(num1,num2,num3)<<endl;
    
    return 0;
}

