#include <iostream>
#include <locale>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	double x,y,soma = 0;
	
	cin>>x>>y;
	while ((x > 0.00) && (y > 0.00))
	{
		if (x < y)
		{
		
			for (i = x;i <= y;i++)
			{
				soma += i;
				cout<<fixed<<setprecision(0)<<i<<" ";
			}
		}
		else if (x>y)
		{
			for (i = y;i <= x;i++)
			{
				soma += i;
				cout<<fixed<<setprecision(0)<<i<<" ";
			}			
		}
		else
		{
			cout<<fixed<<setprecision(0)<<x<<" ";
		}
		cout<<"Sum="<<fixed<<setprecision(0)<<soma<<endl;
		cin>>x>>y;
		soma = 0;
	}
	
	cin.get();
	return 0;
}
