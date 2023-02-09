/**
* @file CalcEdad.cpp
* @brief Hacer un programa que calcule la edad del usuario a partir de su fecha de nacimiento
* @author Pablo Torres
* @date 09/02/2023
*/

#include <iostream>

using namespace std;

int main()
{
    int anioActual=2023;
    int mesActual=2;
    int diaActual=9;

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

    if (mes<=mesActual && dia<=diaActual){
    	edad = anioActual - anio;
    }else {
    	edad = anioActual - anio - 1;
    }

    cout<<"Tu edad es de "<<edad<<" años"<<endl;

    return 0;
}