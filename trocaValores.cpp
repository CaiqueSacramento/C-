#include <iostream>
#include <Math.h>
using namespace std;

int trocaValores(int a, int b);
int main()
{
	/*Faça a troca dos valores de duas variáveis inteiras, ou seja, o valor de a é
igual ao valor de b e o valor de b é igual ao valor de a (caso queira um desafio
maior, tenta resolver sem utilizar variáveis auxiliares).*/

	/*
Swap the values ​​of two integer variables, that is, the value of a is
equals the value of b and the value of b is equal to the value of a (if you want a challenge
larger, try to solve without using auxiliary variables)*/

	int a; 
	int b;
	
	cout << "Digite o valor de A: ";
	cin >> a;
	
	cout << "Digite o valor de B: ";
	cin >> b;
	
	trocaValores(a, b);
	
	
	return 0;
}

int trocaValores(int a, int b)
{
	a = a + b;
	
	b = a - b;
	a = a - b;
	
	
	cout << "O novo valor de A: " << a << endl;
	cout << "O novo valor de B: " << b << endl;
	
	
}
