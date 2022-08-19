#include <iostream>
#include <Math.h>
using namespace std;

float mudancaPeso(float pesoKg);
int main()
{
	float pesoKg;
	
	cout << "Digite seu peso em kg: ";
	cin >> pesoKg;
		
	cout << "Depois de seu peso aumentar em 12% ele sera: " << mudancaPeso(pesoKg) << "g";
		
	return 0;
}

float mudancaPeso(float pesoKg)
{
	float pesoG;
	
	pesoG = (pesoKg * 1000)*1.12;
	
	return pesoG;	
}