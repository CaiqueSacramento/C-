#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	
	/*Escreva um programa que pergunte ao usu�rio se ele deseja desenhar um
padr�o como mostrado na captura de tela abaixo. Se o usu�rio digitar �Y�
ou �y� o programa deve desenhar o padr�o. Se �Q� ou �q� for escolhido, o
programa deve sair. No entanto, se qualquer outra entrada alfanum�rica for
fornecida para programar, o programa exibir� que a entrada espec�fica n�o
� reconhecida. Use loops for aninhados em seu programa. A intera��o com
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