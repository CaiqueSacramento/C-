#include <iostream>
#include <Math.h>
using namespace std;

int invertendoValor(int numero);

int main()
{
	int numero;
	
	cout << "Digite um numero inteiro de 3 digitos: ";
	cin >> numero;
	
	invertendoValor(numero);
	
	return 0;
}

int invertendoValor(int numero)
{
	int auxiliarCentena;
	int auxiliarDezena;
	int auxiliarUnidade;
	auxiliarCentena = numero/100;
	auxiliarDezena = ((numero)/10)%10;
	auxiliarUnidade = ((numero)%100)%10;
	
	cout << "Numero Invertido: " << auxiliarUnidade  << auxiliarDezena << auxiliarCentena;
	
	
	
}