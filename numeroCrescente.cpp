#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int controle;
	
	cout << "Digite o numero: ";
	cin >> a;
	
	cout << "Digite o numero: ";
	cin >> b;
	
	cout << "Digite o numero: ";
	cin >> c;
	
	if(a > b && a > c)
	{
		cout << "O maior numero eh " << a << endl;
		if(b > c)
		{
			cout << b <<" eh o numero do meio" << endl << c << " eh o menor";
		}
		else
		{
			cout << c << " eh o numero do meio" << endl << b << " eh o menor";
		}
		
	}
	
	else if(b > a && b > c)
	{
		cout << "O maior numero eh " << b << endl;
		if(a > c)
		{
			cout << a <<" eh o numero do meio" << endl << c << " eh o menor";
		}
		else
		{
			cout << c <<" eh o numero do meio" << endl << a << " eh o menor";
		}
	}
		
	else if(c > a && c > b)
	{
		cout << "O maior numero eh " << c << endl;
		if(a > b)
		{
			cout << a <<" eh o numero do meio" << endl << b << " eh o menor";
		}
		else
		{
			cout << b <<" eh o numero do meio" << endl << a << " eh o menor";
		}
	}
	
	
	
	return 0;
}