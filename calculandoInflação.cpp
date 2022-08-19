#include <iostream>

using namespace std;

/*Escreva um programa para medir a taxa de inflação no ano passado. O programa pede o preço de um 
item no ano passado e hoje. Estima a taxa de inflação como a diferença no preço dividida pelo preço do ano passado.

Seu programa deve permitir que o usuário repita esse cálculo quantas vezes desejar.

Defina uma função para calcular a taxa de inflação. A taxa de inflação deve ser um valor 
de tipo double, fornecendo a taxa como porcentagem, por exemplo, 5.3 para 5.3%.*/

int main()
{
	while(1 < 2)
	{
		double taxaInflacao(float atual, float passado);
		float passado;
		float atual;
		int escolha;
		
		cout << "Entre com o valor passado do item: ";
		cin >> passado;
		
		cout << "\nEntre com o valor atual do item: ";
		cin >> atual;
		
		
		taxaInflacao(atual, passado);
	
		cout << "\nDigite 1 para Continuar e 2 para Encerrar\n";
		cin >> escolha;
		if(escolha == 2)
		{
			break;
		}
	}
	
	return 0;
}

double taxaInflacao(float atual, float passado)
{
		float diferenca;
		diferenca = atual-passado;
		
		double inflacao;
		inflacao = (diferenca/passado)*100;
		
		cout << "\nO aumento na inflacao deste item foi de " << inflacao << "%" << endl;
}