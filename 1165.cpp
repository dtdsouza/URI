#include <iostream>

using namespace std;
int main()
{
	int resto,n,i,j,x,primo;
	cin>>n;
	for (i = 0;i < n;i++)
	{
		cin>>x;
		primo = 0;
		for (j = 2;j < x;j++)
		{
			resto = x%j;
			if (resto == 0)
			{
				primo++;
			}
		}
		if (primo == 0)
		{
			cout<<x<<" eh primo"<<endl;
		}
		else
		{
			cout<<x<<" nao eh primo"<<endl;
		}
	}
	
	return 0;
}
