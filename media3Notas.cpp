#include <iostream>

using namespace std;

int main()
{
	float valor1;
	float valor2;
	float valor3;
	
	
	cout << "Digite o valor da primeira nota: ";
	cin >> valor1;
	
	cout << "Digite o valor da segunda nota: ";
	cin >> valor2;
	
	cout << "Digite o valor da terceira nota: ";
	cin >> valor3;
	
	
	float media = valor1 + valor2 + valor3;
	
	cout << "A media das notas: " << media/3; 
	
	return 0;
}