#include <iostream>
#include <string>
using namespace std;

int suma(int numero1 , int numero2){
	int suma=numero1+numero2;
	return suma;
}
int resta (int numero1 , int numero2){
	int resta=numero1-numero2;
	return resta;}
	
int multiplicacion (int numero1 , int numero2){
	int multiplicacion=numero1*numero2;
	return multiplicacion;}
	
int division (int numero1 , int numero2){
	int division=numero1/numero2;
	return division;
}


int main () {

	int opcion;
	int resultado;
	int numero1;
	int numero2;
	
	cout<<"Ingrese una opcion, 1 para sumar 2 para restar 3 para multiplicar y 4 para dividir"<<endl;
	cin>>opcion;
	
	switch (opcion) {
		case 1: 
		cout<<"Ingrese un numero: ";
		cin>>numero1;
		cout<<"Ingrese otro numero: ";
		cin>>numero2;
		resultado=suma(numero1,numero2);
		cout<<"El resultado de la suma es: "<<resultado;
	break;
	    case 2: 
	    cout<<"Ingrese un numero: ";
		cin>>numero1;
		cout<<"Ingrese otro numero: ";
		cin>>numero2;
		resultado=resta(numero1,numero2);
		cout<<"El resultado de la resta es: "<<resultado;
	break;  
	    case 3: 
	    cout<<"Ingrese un numero: ";
		cin>>numero1;
		cout<<"Ingrese otro numero: ";
		cin>>numero2;
		resultado=multiplicacion(numero1,numero2);
	    cout<<"El resultado de la multiplicacion es: "<<resultado;
	break;
	    case 4:
	    cout<<"Ingrese un numero: ";
		cin>>numero1;
		cout<<"Ingrese otro numero: ";
		cin>>numero2;
		resultado=division(numero1,numero2);
		cout<<"El resultado de la division es: "<<resultado;
	}
}

