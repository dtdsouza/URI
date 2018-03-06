#include <iostream>

using namespace std;
int main()
{
	int pos,n,i,menor;
	cin>>n;
	int x[n];
	
	for (i=0;i<n;i++)
	{
		cin>>x[i];
		
		if (i == 0)
		{
			menor = x[i];
		}
		else if (x[i] < menor)
		{
			menor = x[i];
			pos = i;
		}
	}
	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Posicao: "<<pos<<endl;
	return 0;
}
