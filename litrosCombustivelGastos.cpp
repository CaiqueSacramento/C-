#include <iostream>
#include <Math.h>
using namespace std;

float combustivelGasto(float tempoGasto, float velocidadeMedia, float kmLitro);
int main()
{
	float tempoGasto;
	float velocidadeMedia;
	float kmLitro;
	
	cout << "Digite o tempo gasto na viagem em HORAS: ";
	cin >> tempoGasto;
	
	cout << "Digite a velocidade media do carro em KM/L: ";
	cin >> velocidadeMedia;
	
	cout << "Digite quantos KM/H o carro faz: ";
	cin >> kmLitro;
	
	cout << "Foram Gastos " << combustivelGasto(tempoGasto, velocidadeMedia, kmLitro) << " litros de gasolina";
	
	
	
	
	return 0;
}

float combustivelGasto(float tempoGasto, float velocidadeMedia, float kmLitro)
{
	float combustivel = (tempoGasto*velocidadeMedia)/kmLitro;
	
	return combustivel;	
}