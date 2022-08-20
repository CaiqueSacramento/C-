#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<windows.h>
using namespace std;

int main()
{
	system("cls || clear");
	int i, j, k, m;
	int controle = 1;
	int tempo = 33333;
	
	for(m = 0; m < 100; m++)
	
	{	// mover para a direita
		for(i = 0; i < 10; i++)
		{
			controle = 1;
			while(controle <= 4) // desenhando a arvore
			{
				for(j = 0; j < i; j++)
					cout << " ";
					
				for(k = 0; k < (2*controle) - 1; k++)
				{
					cout << "* ";	
				}	
				cout << endl;
				controle++;
			}
			cout.flush();
			usleep(tempo);
			system("cls || clear");
		}
		
		//mover para a esquerda
		
		for(i = 10; i > 0; i--)
		{
			controle = 1;
			while(controle <= 4)
			{
				for(j = 0; j < i; j++)
				{
					cout << " ";
				}
				
				for(k = 0; k < (2*controle) - 1; k++)
				{
					cout << "* ";
				}
				cout << endl;
				controle++;
			}
	
			cout.flush();
			usleep(tempo);
			system("cls || clear");	
		}		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}