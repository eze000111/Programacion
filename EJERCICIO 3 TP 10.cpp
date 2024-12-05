#include <iostream>
using namespace std;

int potencia(int base, int exponente){
	int resultado=1;
	
    for (int i=1; i<=exponente; i++) {
        resultado*=base;
    }
    
    return resultado;
}

int main(){
	int base, exponente, resultado;
	
	cout<<"Ingrese la base de la potencia:";
	cin>>base;
	cout<<""<<endl;
	cout<<"Ingrese el exponente de la base:";
	cin>>exponente;
	
	cout<<""<<base<<" elevado a "<<exponente<<" es:"<<potencia(base, exponente);
}
