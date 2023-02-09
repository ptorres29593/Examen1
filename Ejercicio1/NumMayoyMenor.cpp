

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

int numMayor(int n1, int n2, int n3){
    if (n1 > n2 && n1 > n3){
        return n1;
    }else if (n2 > n1 && n2 > n3){
        return n2;
    }else {
        return n3;
    }
}

int numMenor(int n1, int n2, int n3){
    if (n1 < n2 && n1 < n3){
        return n1;
    }else if (n2 < n1 && n2 < n3){
        return n2;
    }else {
        return n3;
    }
}


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

