#include <iostream>
#include <Math.h>
using namespace std;

/*Quando está frio, os meteorologistas transmitem um índice chamado fator de frio de vento, 
que leva em consideração a velocidade do vento e a temperatura. O índice fornece uma medida 
do efeito resfriador do vento em uma dada temperatura do ar. Esse índice pode ser aproximado 
pela seguinte fórmula*/

int main()
{
	
	double indice;
	float temperaturaCelsius;
	float velocidadeVento;
	
	cout << "Digite o valor da temperatura em graus celsius: ";
	cin >> temperaturaCelsius;
	
	cout << "Digite o valor da velocidade do vento em m/s: ";
	cin >> velocidadeVento;
	
	
	indice = (13.12 + (0.6215*temperaturaCelsius) - (11.37*pow(velocidadeVento, 0.16)) + (0.3965*temperaturaCelsius * pow(velocidadeVento, 0.016)));
	
	
	
	cout << indice << " Graus Celsius";
	
	
	
	
	
	int idade = 5;
	cout << endl <<idade/10;
	
	return 0;
}
