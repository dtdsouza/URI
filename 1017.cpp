#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int vel,time;
	float litros;
	cin>>time>>vel;
	litros = time * vel/12.0;
	cout<<fixed<<setprecision(3)<<litros<<endl;
	cin.get();
	return 0;
}
