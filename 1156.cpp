#include <iostream>
#include <locale>
#include <iomanip>
#define razao 2.0

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float num = 1,den = 1,s = 1;
	
	for (int i = 1;i < 19;i++)
	{
		num = num+razao;
		den = den*razao;
		s += num/den;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}
