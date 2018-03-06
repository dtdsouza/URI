#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if ((b>c) && (d>a) && ((c+d)>(a+b)) && (c>0) && (d>0) && (a%2 == 0))
	{
		cout<<"Valores aceitos"<<endl;
	}
	else
	{
		cout<<"Valores nao aceitos"<<endl;
	}
	cin.get();
	return 0;
}
