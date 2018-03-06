#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	cin>>a>>b;
	if ((a%b == 0) || (b%a == 0))
	{
		cout<<"Sao Multiplos"<<endl;
	}
	else
	{
		cout<<"Nao sao Multiplos"<<endl;
	}
	cin.get();
	return 0;
}
