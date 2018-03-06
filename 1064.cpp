#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n[6],soma = 0,media;
	int i,j=0;
	
	for (i = 0; i < 6; i++)
	{
		cin>>n[i];
		if (n[i] > 0)
		{
			soma += n[i];
			j++;
		}
	}
	
	media = soma/j;
	cout<<j<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1)<<media<<endl;
	
	cin.get();
	return 0;
}
