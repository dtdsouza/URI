#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float verifica,x,y,media;
	
	do
	{
		cin>>x;
	
		while ((x < 0)|| (x > 10)) 
		{
			cout<<"nota invalida"<<endl;
			cin>>x;
		}
		
		cin>>y;
		while ((y < 0)|| (y > 10))
		{
			cout<<"nota invalida"<<endl;
			cin>>y;
		}
		
		media = (x+y)/2;
		cout<<"media = "<<fixed<<setprecision(2)<<media<<endl;
		
		do
		{
			cout<<"novo calculo (1-sim 2-nao)"<<endl;
			cin>>verifica;
		} while ((verifica < 1)|| (verifica > 2));
		
	} while (verifica == 1);
	cin.get();
	return 0;
}
