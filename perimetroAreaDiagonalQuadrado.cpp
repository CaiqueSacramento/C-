#include <iostream>
#include <Math.h>
using namespace std;

float calculandoPerimetro(float lado);
float calculandoArea(float lado);
float calculandoDiagonal(float lado);

int main()
{
	float lado;
	cout << "Digite o valor do lado do quadrado: ";
	cin >> lado;
	
	cout << "O perimetro do quadrado eh: " << calculandoPerimetro(lado) << endl;
	cout << "A area do quadrado eh: " << calculandoArea(lado) << endl;
	cout << "A diagonal do quadrado eh: " << calculandoDiagonal(lado) << endl;
	
	
	return 0;
}

float calculandoPerimetro(float lado)
{
	float perimetro = lado*4;	
	
	return perimetro;
}

float calculandoArea(float lado)
{
	float area = lado*lado;
	
	return area;
}

float calculandoDiagonal(float lado)
{
	float diagonal = sqrt(pow(lado, 2) + pow(lado, 2));
	
	return diagonal;
}
	
	