#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	
	/*Escreva um programa que pergunte ao usuário se ele deseja desenhar um
padrão como mostrado na captura de tela abaixo. Se o usuário digitar “Y”
ou “y” o programa deve desenhar o padrão. Se “Q” ou “q” for escolhido, o
programa deve sair. No entanto, se qualquer outra entrada alfanumérica for
fornecida para programar, o programa exibirá que a entrada específica não
é reconhecida. Use loops for aninhados em seu programa. A interação com
o programa pode ser assim:*/
	
	
	
	char resposta;

	
	
	cout << "Digite Y ou y para desenhar o padrao e Q ou q para nao desenhar: ";
	cin >> resposta;
	
	if (toupper(resposta) == 'Y')
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				cout << "* ";
				
			}
			cout << endl;
			
			for (int j = 0; j < 15; j++)
			{
				cout << " *";
				
			}
			cout << endl;
		}
		
	}
	
	else if(toupper(resposta) == 'Q')
	{
		cout << endl << "Estou fechando!";
	}
	else 
	{
		cout << "Tecla nao reconhecida!";
		
	}
	
	
	
	
	
	
	
	return 0;
}