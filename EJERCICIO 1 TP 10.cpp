#include <iostream>
#include <Windows.h>
using namespace std;

int mayor(int num1, int num2){
	if(num1>num2){
		cout<<"	"<<num1<<" es mayor que "<<num2<<endl;
	}
	else{
		cout<<"	"<<num2<<" es mayor que "<<num1<<endl;
	}
}

int main(){
	int num1, num2;
	
	cout<<"****************************************************************"<<endl;
	cout<<""<<endl;
	cout<<"Ingrese el numero que desee:";
	cin>>num1;
	cout<<""<<endl;
	cout<<"Ingrese otro numero que desee:";
	cin>>num2;
	cout<<""<<endl;
	cout<<"****************************************************************"<<endl;
	cout<<""<<endl;
	
	mayor(num1,num2);
}
