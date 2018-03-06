#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>
#define pi 3.14159

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double R,volume;
	cin>>R;
	volume = 4.0/3*pi*pow(R,3); //utiliza 4.0 ao invés de 4 pq algumas linguagens assumen que a divisão de um int por outro resulta em int;
	cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<endl;
	cin.get();
	return 0;
}
