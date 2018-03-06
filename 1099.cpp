#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y,n,i,j,resto,soma = 0;
	
	cin>>n;
	for (i = 0;i < n; i++)
	{
		cin>>x>>y;
		soma = 0;
		if (x < y)
		{
		
			resto = x%2;
			if (resto == 0)
			{
				for (j = x+1;j < y;j += 2)
				{
					soma += j;
				}
			}
			else if (resto == 1)
			{
				for (j = x+2;j < y; j += 2)
				{
					soma += j;
				}
			}
		}
		else if (x > y)
		{
			resto = y%2;
			if (resto == 0)
			{
				for (j = y+1;j < x;j += 2)
				{
					soma += j;
				}
			}
			else if (resto == 1)
			{
				for (j = y+2;j < x; j += 2)
				{
					soma += j;
				}
			}		
		}
		else
		{
			soma = 0;
		}
		cout<<soma<<endl;
	}
		
	cin.get();
	return 0;
}
