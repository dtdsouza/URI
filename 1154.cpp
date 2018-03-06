#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade,i = 1;
	float soma = 0,media = 0;
	
	do
	{
		cin>>idade;
		if (idade >= 0)
		{
			soma += idade;
			media = soma/i;
			i++;
		}
	} while (idade >= 0);
	cout<<fixed<<setprecision(2)<<media<<endl;
	cin.get();
	return 0;
}
