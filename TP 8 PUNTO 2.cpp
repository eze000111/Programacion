#include <iostream>
#include <string>
using namespace std;

int contarPalabras(string oracion) {
	
    int espacio=0;
    for (int i=0; i<oracion.size();i++) {
        if (oracion.at(i)==' ') {
            espacio++;
        }
    }
    return espacio + 1; 
}
int main() {
	
    string oracion;
    cout<<"Ingrese una oracion" <<endl;
    getline(cin,oracion);
    int palabras = contarPalabras(oracion);
    cout<<"La oracion contiene " <<palabras<< " palabras";
    
    return 0;
}

