#include <iostream>
using namespace std;

int main()
{
		/*peça ao usuário para digitar
	qualquer número diferente do número igual ao número de vezes que
	foi solicitado a digitar um número. (ou seja, na primeira iteração
	"Digite qualquer número diferente de 0" e na segunda iteração
	"Digite qualquer número diferente de 1"m etc. etc. O programa deve
	se comportar de acordo saindo quando o usuário digitar o número
	que foi solicitado não para.)*/

	int x;
	int y;
	
	cout << "Digite um numero: ";
	cin >> x;
		
		
	while(1 < 2)
	{
		cout << "Digite qualquer numero diferente de " << x << endl;
		cin >> y;
		if(x != y)
		{			
			x++;
		}
			
		else
		{
			cout << "Ei! voce nao deveria digitar " << x << "!";
			break;		
		}		
	}
	return 0;
}