#include <iostream> 
#include <string>
using namespace std;

size_t PalabraUsuario(string oracion , string palabra) {
	return oracion.find(palabra);

}

int main () {
	
	string palabra;
	string oracion;
	
	cout<<"Platense es el club mas grande del mundo."<<endl;
	cout<<"Ingrese una palabra de la oracion para buscar: ";
	getline (cin,palabra);
	cout<<"La palabra a buscar era "<<PalabraUsuario;

	
	
}
