

/**
* @file NumMayorMenor.cpp
* @brief Hacer un programa que pida 3 números y te diga cual es el mayor y cual es el menor
* @author Pablo Torres
* @date 09/02/2023
*/

#include <iostream>

using namespace std;

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

    if (num1 > num2 && num1 > num3){
    	cout<<"El número mayor es el numero "<<num1<<endl;
    }else if (num2 > num1 && num2 > num3){
    	cout<<"El número mayor es el numero "<<num2<<endl;
    }else {
    	cout<<"El número mayor es el numero "<<num3<<endl;
    }


    if (num1 < num2 && num1 < num3){
    	cout<<"El número menor es el numero "<<num1<<endl;
    }else if (num2 < num1 && num2 < num3){
    	cout<<"El número menor es el numero "<<num2<<endl;
    }else {
    	cout<<"El número menor es el numero "<<num3<<endl;
    }

    return 0;
}

