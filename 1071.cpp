#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y,i,soma = 0,resto;
	
	cin>>x>>y;
	if (x < y)
	{
		x++;
		resto = x%2;
		if (resto == 0)
		{
			for (i = x;i < y;i++)
			{
				i++;
				soma += i;
			}
		}
		else
		{
			for (i = x;i < y;i++)
			{
				soma += i;
				i++;
			}
		}
	}
	if (y < x)
	{
		y++;
		resto = y%2;
		if (resto == 0)
		{
			for (i = y;i < x;i++)
			{
				i++;
				soma += i;
			}
		}
		else
		{
			for (i = y;i < x;i++)
			{
				soma += i;
				i++;
			}
		}
	}
	cout<<soma<<endl;
	cin.get();
	return 0;
}
