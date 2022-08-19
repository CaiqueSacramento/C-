#include <iostream>

using namespace std;

/*Escreva um programa que peça a altura, o peso e a idade do usuário e calcule o tamanho das roupas de acordo com as seguintes fórmulas:

Tamanho do chapéu = peso em libras dividido pela altura em polegadas e tudo isso multiplicado por 2.9;

Tamanho do casaco (tórax em polegadas) = altura vezes peso dividido por 288 e um ajuste efetuado pelo acréscimo de um oitavo de uma polegada 
para cada 10 anos acima dos 30 anos. (Observe que o ajuste só ocorre após 10 anos completos. Assim, não há ajuste para as idades de 30 a 39.);

Cintura em polegadas = peso dividido por 5.7 e um ajuste efetuado pelo acréscimo de um décimo de uma polegada para cada 2 anos acima dos 28 anos. 
(Observe que o ajuste só ocorre após 2 anos completos. Assim não há ajuste para os 29 anos.)

Utilize funções para cada cálculo. Seu programa deve permitir que o usuário repita esse cálculo quantas vezes desejar.*/

int main()
{	while(1 < 2)
	{

		double funcaoChapeu(float altura, float peso, int idade);
		double funcaoCasaco(float altura, float peso, int idade);
		double funcaoCintura(float altura, float peso, int idade);
		float altura, peso;
		int idade;
		int controladorIdade;
		int escolha;
		
		cout << "Digite a sua Altura em m: ";
		cin >> altura;
		
		cout << "Digite a sua peso em kg: ";
		cin >> peso;
		
		cout << "Digite a sua idade: ";
		cin >> idade;
		
			
		funcaoChapeu(altura, peso, idade);
		funcaoCasaco(altura, peso, idade);
		funcaoCintura(altura, peso, idade);
		cout << "\n1 para continuar 2 para encerrar: ";
		cin >> escolha;
		if(escolha == 2)
		{
			break;
		}
	}
	return 0;
}

 double funcaoChapeu(float altura, float peso, int idade)
{
		float tamanhoChapeu;
	tamanhoChapeu = ((peso*2.20462)/(altura*39.3701))*2.9;
	
	cout << "O tamanho para o seu chapeu eh " << tamanhoChapeu;
}
double funcaoCasaco(float altura, float peso, int idade)
{
	float tamanhoCasaco;
	tamanhoCasaco = (altura*peso)/288;
	
	int testeIdade;
	testeIdade = idade - 30;
	
	if(idade > 30)
	{
		tamanhoCasaco = tamanhoCasaco + ((testeIdade/10)*4.9212625);
	}
	
	cout << "\nO tamanho para o seu casaco eh " << tamanhoCasaco;	
}
double funcaoCintura(float altura, float peso, int idade)
{
	float tamanhoCintura = (peso/5.7);
	int testeIdade;
	testeIdade = idade - 28;
	if(idade > 28)
	{
		tamanhoCintura = tamanhoCintura + ((testeIdade/2)*3.93701);
	}
	cout << "\nO tamanho para da cintura eh " << tamanhoCintura;
}