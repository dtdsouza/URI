#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double a,b,c,saida;
	cin>>a>>b>>c;
	if (((a+b)>c) && ((a+c)>b) && ((c+b)>a))
	{
		saida = a+b+c;
		cout<<"Perimetro = "<<fixed<<setprecision(1)<<saida<<endl;
	}
	else
	{
		saida = (a+b)*c/2;
		cout<<"Area = "<<fixed<<setprecision(1)<<saida<<endl;
	}
	cin.get();
	return 0;
}
