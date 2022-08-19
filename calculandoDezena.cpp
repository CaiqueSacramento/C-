#include <iostream>
#include <Math.h>
using namespace std;

int calculandoDezena(int numero);

int main()
{
	int numero;
	cout << "Digite um numero inteiro de 3 digitos: ";
	cin >> numero;
	
	cout << calculandoDezena(numero);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
int calculandoDezena(int numero)
{
	int dezena = (numero/10)%10;
	return dezena;
}