#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

#define p1 0.2
#define p2 0.3
#define p3 0.5

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i;
	cin>>n;
	float notas[3],media = 0;
	
	for (i = 0 ;i < n;i++)
	{
		cin>>notas[0]>>notas[1]>>notas[2];
		media = (notas[0]*p1)+(notas[1]*p2)+(notas[2]*p3);
		cout<<fixed<<setprecision(1)<<media<<endl;
	}
	cin.get();
	return 0;
}
