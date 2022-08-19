#include <iostream>
#include <Math.h>
using namespace std;

int calculandoMaiorNumero(int quantidadeNumeros, int numeros);

int main()
{
	int quantidadeNumeros;
	int controle = 0;
	int numero;
	cout << "Digite a quantidade de numeros a serem lidos: ";
	cin >> quantidadeNumeros;
	
	
	for(int i = 0; i < quantidadeNumeros; i++)
	{
		cout << "Digite o numero " << i+1 << ": ";
		cin >> numero;
		if(numero > controle)
		{
			controle = numero;
		}
		
	}
	
	cout << "O maior Numero: " << controle;
	return 0;
}

