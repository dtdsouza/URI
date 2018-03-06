#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y,soma = 0,resto;
	
	cin>>x>>y;
	if (x > y)
	{
		do
		{
			resto = y%13;
			if (resto == 0)
			{
				y++;
			}
			else
			{
				soma += y;
				y++;
			}
		} while (y <= x);
	}
	else if (x < y)
	{
		do
		{
			resto = x%13;
			if (resto == 0)
			{
				x++;
			}
			else
			{
				soma += x;
				x++;
			}
		} while (x <= y);
	}
	
	else
	{
		resto = x%13;
		if (resto == 0)
		{
			soma = 0;
		}
		else
		{
			soma = x;
		}
	}
	cout<<soma<<endl;
	cin.get();
	return 0;
}
