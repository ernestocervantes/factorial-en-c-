#include <iostream>

using namespace std;

int factorial(int n) {
   if(n < 0) return 0;
   else if(n > 1)  return n*factorial(n-1); 
   return 1;
}

int main()
{
	int numero;
	
	cout<<"Ingrese un número :\n";
	cin>>numero;
	
	cout<<"\n";
	cout<<"factorial :"<<factorial(numero)<<"\n";
}
