#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,i,j,resto,soma;
	
	cin>>x;
	while (x != 0)
	{
		resto = x%2;
		soma = 0;
		for (i = 0; i < 5;i++)
		{
			if (resto == 0)
			{
				soma += x;
				x += 2;
			}
			else
			{
				x++;
				soma += x;
				x++;
			}
		}
		cout<<soma<<endl;
		cin>>x;
	}
	return 0;
}
