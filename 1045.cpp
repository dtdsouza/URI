#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double n,max,meio,min;
	int i;
	for (i = 0;i < 3;i++)
	{
		cin>>n;
		if (i == 0)
		{
			max = n;
			meio = n;
			min = n;
		}
		if (n > max)
		{
			max = n;
		}
		if (n < min)
		{
			min = n;
		}
		if ((n > min) && (n < max))
		{
			meio = n;
		}
	}

	cout<<max<<endl<<meio<<endl<<min<<endl;
	if (max >= min + meio)
	{
		cout<<"NAO FORMA TRIANGULO"<<endl;
	}
else
{
	if(pow(max,2) == pow(meio,2) + pow(min,2))
	{
		cout<<"TRIANGULO RETANGULO"<<endl;
	}

	if (pow(max,2) > pow(meio,2) + pow(min,2))
	{
		cout<<"TRIANGULO OBTUSANGULO"<<endl;
	}

	if(pow(max,2) < pow(meio,2) + pow(min,2))
	{
		cout<<"TRIANGULO ACUTANGULO"<<endl;
	}

	if ((max == meio) && (min == meio))
	{
		cout<<"TRIANGULO EQUILATERO"<<endl;
	}

	if (((max == meio) && (meio !=min)) || ((meio == min) && (min != max)))
	{
		cout<<"TRIANGULO ISOSCELES"<<endl;
	}
}
	cin.get();
	return 0;
}
