#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double BaK(double numero1) {
	double BaK=numero1 / 1024;
	return BaK;
}
double TaM(double numero1) {
	double TaM=numero1 * 1000000;
	return TaM;
}
double GaP(double numero1) {
	double GaP=numero1 / 1000000;
	return GaP;
}
int main () {
	
	int opcion;
	double resultado;
    int numero1;
	
	cout<<"Ingrese una opcion, 1 para pasar de Byte a Kilobyte 2 para pasar de Terabyte a Megabyte y 3 para pasar de Gigabytes a"<<endl;
	cout<<"Petabytes"<<endl;
	cin>>opcion;
	
	switch (opcion) {
		case 1:
			cout<<"Ingrese un numero para pasar de Byte a Kilobyte: ";
			cin>>numero1;
			resultado= BaK(numero1);
			cout<<numero1<<" Bytes pasado a KiloBytes son: "<<resultado;
		break;
		
		case 2:	
		    cout<<"Ingrese un numero para pasar de Terabyte a Megabyte: ";
			cin>>numero1;
			resultado= TaM(numero1);
			cout<<numero1<<" Terabytes pasado a Megabytes son: "<<resultado;
		break;
		 
		case 3:
			cout<<"Ingrese un numero para pasar de GigaBytes a Petabytes: ";
			cin>>numero1;
			resultado= GaP(numero1);
			cout<<numero1<<" Gigabytes pasado a Petabytes son: "<<resultado;
		break;
	}
	
}

