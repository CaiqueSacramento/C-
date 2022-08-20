#include <iostream>

using namespace std;

int main()
{
		/*A Conjectura de Collatz ou problema 3x+1 pode ser resumida da seguinte
	forma:
	Tome qualquer inteiro positivo n. Se n for par, divida n por 2. Se n for
	ímpar, multiplique n por 3 e adicione 1. Repita o processo indefinidamente.
	A conjectura afirma que não importa com qual número você comece, você
	sempre chegará a 1 eventualmente.
	Dado um número n, retorne o número de passos necessários para chegar a
	1.*/
	
		/*The Collatz Conjecture or 3x+1 problem can be summarized as follows form:
	Take any positive integer n. If n is even, divide n by 2. If n is odd, multiply n 
	by 3 and add 1. Repeat the process indefinitely. The conjecture holds that no matter 
	what number you start with, you will always  reach 1 eventually. Given a number n, 
	return the number of steps needed to reach 1.*/
	
	int n;
	int contador = 0;
	
	cout << "Digite um numero inteiro: ";
	cin >> n;
	
	while (n != 1)
	{
	
		if(n%2 == 0)
		{
			n /= 2;	
		}
		
		else
		{
			n = (n*3)+1;
		}
		
		contador++;
	}
	
	cout << "O numero de passos necessarios para chegar ao resultado foram: " << contador; 	
	
	
	
	return 0;
}