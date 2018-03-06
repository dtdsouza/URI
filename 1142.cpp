#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,x = 1,resto;
	
	cin>>n;
	for (i = 1;i <= n;i++)
	{
		do
		{
			resto = x%4;
			if (resto == 0)
			{
				cout<<"PUM"<<endl;
				x++;
			}
			else
			{
				cout<<x<<" ";
				x++;			
			}
		} while (resto != 0);
	}
	cin.get();
	return 0;
}
