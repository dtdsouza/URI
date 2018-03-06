#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n[5],i,j=0,resto;
	
	for (i = 0; i < 5; i++)
	{
		cin>>n[i];
		resto = n[i]%2;
		if (resto == 0)
		{
			j++;
		}
	}
	
	cout<<j<<" valores pares"<<endl;
	
	cin.get();
	return 0;
}
