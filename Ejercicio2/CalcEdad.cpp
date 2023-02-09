/**
* @file CalcEdad.cpp
* @brief Hacer un programa que calcule la edad del usuario a partir de su fecha de nacimiento
* @author Pablo Torres
* @date 09/02/2023
*/

#include <iostream>

using namespace std;

int anioActual=2023;
int mesActual=2;
int diaActual=9;

int calcEdad(int,int,int);

int calcEdad(int d, int m, int y){

    int edad;

     if (m<=mesActual && d<=diaActual){
        edad = anioActual - y;
    }else {
        edad = anioActual - y - 1;
    }

    return edad;

}

int main()
{

    int anio;
    int mes;
    int dia;

    int edad;

    cout<<"Calculadora de edad dando una fecha de nacimiento"<<endl;
    cout<<"Ingresa Tu fecha de nacimiento"<<endl;
    cout<<"Día: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>anio;

    cout<<"Tu edad es de "<<calcEdad(dia,mes,anio)<<" años"<<endl;

    return 0;
}