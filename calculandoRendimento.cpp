#include <iostream>
#include <Math.h>
using namespace std;

float calculandoRendimento(float aplicacaoMensal, float taxa, int meses);

int main()
{
	float aplicacaoMensal;
	float taxa;
	int meses;
	
	cout << "Digite a sua aplicacao mensal: ";
	cin >> aplicacaoMensal;
	
	cout << "Digite a sua taxa: ";
	cin >> taxa;
	
	cout << "Digite a quantidade de meses: ";
	cin >> meses;
	
	cout << calculandoRendimento(aplicacaoMensal, taxa, meses);
	
	return 0;
}

float calculandoRendimento (float aplicacaoMensal, float taxa, int meses)
{
	float rendimento = aplicacaoMensal * ((pow((1 + taxa), meses) - 1)/taxa);
	
	return rendimento;	
}