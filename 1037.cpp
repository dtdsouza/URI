#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double a;
	cin>>a;
	if ((a < 0) || (a > 100))
	{
		cout<<"Fora de intervalo"<<endl;
	}
	else
	{
		if((a >= 0) && (a <= 25))
		{
			cout<<"Intervalo [0,25]"<<endl;
		}
		else
		{
			if((a > 25) && (a <= 50))
			{
				cout<<"Intervalo (25,50]"<<endl;
			}
			else
			{
				if ((a > 50) && (a <= 75))
				{
					cout<<"Intervalo (50,75]"<<endl;
				}
				else
				{
					if ((a > 75) && (a <= 100))
					{
						cout<<"Intervalo (75,100]"<<endl;
					}
				}
			}
		}
	}
	cin.get();
	return 0;
}
