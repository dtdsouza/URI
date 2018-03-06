#include <iostream>
#include <locale>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,pot,resto;
	cin>>n;
	
	resto = n%2;
	if (resto == 0)
	{
		for (i = 2; i <=n; i = i+2)
		{
			pot = pow(i,2);
			cout<<i<<"^2 = "<<pot<<endl;
		}
	}
	else if (resto == 1)
	{
		for (i = 2; i < n; i = i+2)
		{
			pot = pow(i,2);
			cout<<i<<"^2 = "<<pot<<endl;
		}
	}
	cin.get();
	return 0;
}
