#include <iostream>
#include <string>

using namespace std;

int main () {
    string palabra;
    int cantidad;
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    
    cantidad = palabra.length();
    
    cout << "La cadena contiene " << cantidad << " letras." << endl;
    
    return 0;
}
