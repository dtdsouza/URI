#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,a,i,soma = 0;
	
	cin>>a;
	do
	{
		cin>>x;
	} while (x <= 0);
	
	for (i = 0;i < x;i++)
	{
		soma += a;
		a++;
	}
	cout<<soma<<endl;
	
	cin.get();
	return 0;
}
