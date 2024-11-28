#include <iostream>
#include <string>

using namespace std;
int main () {
	string palabra;
	char caracter;
	int conteo=0;
	
	cout<<"Ingrese una palabra: ";
	cin>>palabra;
	
	cout<<"Ingrese un caracter: ";
	cin>>caracter;
	
	
	for (int i=0;i<palabra.length();i++) {
		if (palabra.at(i)==caracter) {
			conteo++;
		}
	}
	
	cout<<"El caracter "<<caracter<<" aparece "<< conteo<<" veces";
}
	
	

