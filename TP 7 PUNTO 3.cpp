#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    string reves;

    cout << "Ingrese una palabra cualquiera: ";
    cin >> palabra;

    int longitud = palabra.length();
    for (int i = 0; i < longitud; i++) {
        reves+ = palabra[longitud - 1 - i]; 
    }

    cout << "Palabra invertida: " << reves << endl;

    return 0;
}
