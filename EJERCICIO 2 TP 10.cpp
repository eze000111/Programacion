#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int aleatorio(int num){
	return rand()%32000;
}

int main(){
	int numeros, num;
	srand(time(NULL));
	
	cout<<"La cantidad de numeros debe ser menor a 32000."<<endl;
	cout<<" "<<endl;
	cout<<"Ingrese la cantidad de numeros aleatorios que desea:";
	cin>>numeros;
	
	for(int i=1; i<=numeros; i++){
		cout<<aleatorio(num)<<endl;
	}
}
