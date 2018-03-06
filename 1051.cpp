#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario,reajuste;
	cin>>salario;
	if ((salario > 0.00) && (salario <=2000.00))
	{
		cout<<"Isento"<<endl;
	}
	else
	{
		if ((salario > 2000.00) && (salario <= 3000.00))
		{
			reajuste = (salario - 2000.00) * 0.08;
			cout<<"R$ "<<fixed<<setprecision(2)<<reajuste<<endl;
		}
		else
		{
			if((salario > 3000.00) && (salario <= 4500.00))
			{
				reajuste = 1000 * 0.08;
				reajuste +=  (salario - 3000.00) * 0.18;
				cout<<"R$ "<<fixed<<setprecision(2)<<reajuste<<endl;
			}
			else
			{
				if (salario > 4500.00)
					{
						reajuste = 1000 * 0.08;
						reajuste += 1500 * 0.18;
						reajuste += (salario - 4500.00) * 0.28;
						cout<<"R$ "<<fixed<<setprecision(2)<<reajuste<<endl; 
					}
			}
		}
	}
	cin.get();
	return 0;
}
