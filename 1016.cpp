#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,min;
	cin>>a;
	min = a * 2;
	cout<<min<<" minutos"<<endl;
	cin.get();
	return 0;
}
