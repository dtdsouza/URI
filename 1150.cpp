#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,z,i = 0,soma = 0;
	
	cin>>x;
	do
	{
		cin>>z;
	} while (z <= x);
	
	do
	{
		soma += x;
		x++;
		i++;
	} while (soma <= z);
	cout<<i<<endl;
	cin.get();
	return 0;
}
