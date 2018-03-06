#include <iostream>
#include <locale>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y;
	
	cin>>x>>y;
	while (x != y)
	{
		if (x > y)
		{
			cout<<"Decrescente"<<endl;
		}
		else
		{
			cout<<"Crescente"<<endl;
		}
		cin>>x>>y;
	}
	cin.get();
	return 0;
}
