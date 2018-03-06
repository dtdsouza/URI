#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n[5],i,j=0,k=0,l=0,m=0,resto;
	
	for (i = 0; i < 5; i++)
	{
		cin>>n[i];
		resto = n[i]%2;
		if (resto == 0)
		{
			j++;
		}
		else
		{
			l++;
		}
		
		if(n[i] < 0)
		{
			k++;
		}
		if(n[i] > 0)
		{
			m++;
		}
		
	}
	
	cout<<j<<" valor(es) par(es)"<<endl;
	cout<<l<<" valor(es) impar(es)"<<endl;
	cout<<m<<" valor(es) positivo(s)"<<endl;
	cout<<k<<" valor(es) negativo(s)"<<endl;
	
	cin.get();
	return 0;
}
