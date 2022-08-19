#include <iostream>
#include <Math.h>
using namespace std;

float AreaCircunferencia(float raio);

int main()
{
	float r;
	float area;
	cout << "Digite o valor do raio: ";
	cin >> r;
	
	area = AreaCircunferencia(r);
	cout << area;
	
	return 0;
}

float AreaCircunferencia(float raio)
{
	float pi = 3.14;
	double areaCircunferencia = pi*pow(raio, 2);
	
	return areaCircunferencia;
}