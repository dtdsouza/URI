#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario,reajuste,percentual;
	cin>>salario;
	
	if ((salario>=0.00) && (salario<=400.00))
	{
		percentual = 0.15;
		reajuste = percentual * salario;
		salario += reajuste;
	}
	else
	{
		if ((salario > 400.00) && (salario <= 800.00))
		{
			percentual = 0.12;
			reajuste = percentual * salario;
			salario += reajuste;
		}
		else
		{
			if ((salario > 800.00) && (salario <= 1200.00))
			{
				percentual = 0.10;
				reajuste = percentual * salario;
				salario += reajuste;
			}
			else
			{
				if ((salario > 1200.00) && (salario <= 2000.00))
				{
					percentual = 0.07;
					reajuste = percentual * salario;
					salario += reajuste;
				}
				else
				{
					percentual = 0.04;
					reajuste = percentual * salario;
					salario += reajuste;
				}
			}
		}
	}
	
	cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<endl;
	cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<reajuste<<endl;
	cout<<"Em percentual: "<<fixed<<setprecision(0)<<percentual*100<<" %"<<endl;
	cin.get();
	return 0;
}
