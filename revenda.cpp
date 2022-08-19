#include <iostream>

using namespace std;

float revenda(float item);

int main()
{
	float item;
	
	cout << "Digite o valor do item: ";
	cin >> item;
	
	
	cout << "O preco de revenda deste item sera: " << revenda(item);
	
	
	return 0;
}

float revenda(float item)
{
	if(item < 20)
	{
		item = item*1.45;
	}
	
		if(item >= 20)
	{
		item = item*1.3;
	}
	
	return item;
	
}