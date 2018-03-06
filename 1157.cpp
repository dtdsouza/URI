#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,resto;
	
	cin>>n;
	for (i = 1;i <= n;i++)
	{
		resto = n%i;
		if (resto == 0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
