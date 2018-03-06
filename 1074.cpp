#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,resto;
	cin>>n;
	int x[n];
	
	for (i = 0; i < n;i++)
	{
		cin>>x[i];
		resto = x[i]%2;
		
		if (x[i] == 0)
		{
			cout<<"NULL"<<endl;
		}
		else if (resto == 0)
		{
			cout<<"EVEN ";
			if (x[i] < 0)
			{
				cout<<"NEGATIVE"<<endl;
			}
			else if( x[i] > 0)
			{
				cout<<"POSITIVE"<<endl;
			}
		}
		else if ((resto == 1) || (resto == -1))
		{
			cout<<"ODD ";
			if (x[i] < 0)
			{
				cout<<"NEGATIVE"<<endl;
				
			}
			else if( x[i] > 0)
			{
				cout<<"POSITIVE"<<endl;
			}			
		}
	}
	
	cin.get();
	return 0;
}
