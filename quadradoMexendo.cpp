#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

void desenharQuadrado();

int main()
{
	int i, j, k;
	
	
	for(k = 0; k < 5; k++)
	{
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < i; j++)
			{
				cout << endl;
			}
			desenharQuadrado();		
			cout.flush();
			usleep(100000);
			system("clear || cls");
		}
		for(i = 0; i < 10; i++)
		{
			for(j = 10; j > i; j--)
			{
				cout << endl;
			}
			desenharQuadrado();			
			cout.flush();
			usleep(100000);
			system("clear || cls");			
		}				
	}		
	return 0;
}
void desenharQuadrado()
{	
	int i, j;
	for(i = 0; i < 6; i++)
	{
		cout << "**";
	}
	cout << "*" << endl;
	for(i = 0; i < 2; i++)
	{
		cout << "*"; 
		for(j = 0; j < 11; j++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	for (i = 0; i < 6; i++)
	{
		cout << "**";
	}
	cout << "*" << endl;	
}