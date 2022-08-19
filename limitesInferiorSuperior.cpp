#include <iostream>
#include <Math.h>
using namespace std;

int limites(int inferior, int superior);

int main()
{
	int inferior;
	int superior;
	
	cout << "Digite o limite infeior: ";
	cin >> inferior;
	
	cout << "Digite o limite superior: ";
	cin >> superior;
	
	cout << "Os numeros no intervalo sao: \n";
	limites(inferior, superior);
	
	
	
	
	
	return 0;
}

int limites(int inferior, int superior)
{
	for(inferior += 1; inferior < superior; inferior++)
	{
		cout << inferior << "\t";
	}
	
}