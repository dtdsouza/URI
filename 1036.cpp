#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>
#define delta pow(b,2)-4*a*c

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double a,b,c,r1,r2;
	cin>>a>>b>>c;
	if ((2*a)==0)
	{
		cout<<"Impossivel calcular"<<endl;
	}
	else
	{
		if (delta < 0)
		{
			cout<<"Impossivel calcular"<<endl;
		}
		else
		{
			r1 = (-b+sqrt(delta))/(2*a);
			r2 = (-b-sqrt(delta))/(2*a);
			cout<<"R1 = "<<fixed<<setprecision(5)<<r1<<endl;
			cout<<"R2 = "<<fixed<<setprecision(5)<<r2<<endl;
		}
	}
	cin.get();
	return 0;
}
