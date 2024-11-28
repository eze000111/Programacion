#include <iostream>
#include <string>
using namespace std;

int esAnagrama(string palabra1 , string palabra2) {
    if (palabra1.length() == palabra2.length() ) {
        return esAnagrama;
    }
}
    
    
int main () {
	string palabra1;
	string palabra2;
	
	cout<<"Ingrese una palabra para verificar si son anagramas o no: ";
	cin>>palabra1;
	cout<<"Ingrese otra palabra: ";
	cin>>palabra2;
	
	if (esAnagrama(palabra1,palabra2)) {
		cout<<"Es anagrama.";
	}
	else {
		cout<<"No son anagramas.";
	}
}
