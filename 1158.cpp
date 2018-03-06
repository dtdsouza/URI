#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,j,n,x,y,soma = 0,resto;
	
	cin>>n;
	for (i = 0;i < n;i++)
	{
		cin>>x>>y;
		soma = 0;
		resto = x%2;
		for (j = 0;j < y;j++)
		{
			if (resto == 0)
			{
				x++;
				soma += x;
				x++;
			}
			else
			{
				soma += x;
				x += 2;
			}
		}
		cout<<soma<<endl;
	}
	return 0;
}
