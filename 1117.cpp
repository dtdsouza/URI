#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float x,y,media;
	
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
	cin.get();
	return 0;
}
