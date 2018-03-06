#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,resto;
	cin>>n;
	
	for (i = 1; i <10000;i++)
	{
		resto = i%n;
		if (resto == 2)
		{
			cout<<i<<endl;
		}
	}
	cin.get();
	return 0;
}
