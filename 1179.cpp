#include <iostream>

void saida_i (int p,int v[])
{
	int i;
	for (i = 0;i < p;i++)
	{
		std::cout<<"impar["<<i<<"] = "<<v[i]<<"\n";
	}
}

void saida_p (int p,int v[])
{
	int i;
	for (i = 0;i < p;i++)
	{
		std::cout<<"par["<<i<<"] = "<<v[i]<<"\n";
	}
}

using namespace std;
int main()
{
	int i,j = 0,k = 0,n,resto,impar[5],par[5];
	
	for (i = 0;i < 15;i++)
	{
		cin>>n;
		resto = n%2;
		if (resto == 0)
		{
			par[j] = n;
			j++;
		}
		else
		{
			impar[k] = n;
			k++;
		}
		
		if (k == 5)
		{
			saida_i(5,impar);
			k=0;
		}
		else if (j == 5)
		{
			saida_p(5,par);
			j=0;
		}
	}
	saida_i(k,impar);
	saida_p(j,par);
	
	return 0;
}
