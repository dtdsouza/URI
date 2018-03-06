#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int j,i,n,x,resto,soma = 0;
	cin>>n;
	for(i = 0;i < n;i++)
	{
		cin>>x;
		soma = 0;
		for (j = 1;j < x;j++)
		{
			resto = x%j;
			if (resto == 0)
			{
				soma += j;
			}
		}
		if (soma == x)
		{
			cout<<x<<" eh perfeito"<<endl;
		}
		else
		{
			cout<<x<<" nao eh perfeito"<<endl;
		}
	}
	return 0;
}
