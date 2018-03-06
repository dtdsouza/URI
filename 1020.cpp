#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int d,m,a;
	cin>>d;
	a = d/365;
	d = d%365;
	m = d/30;
	d = d%30; 
	cout<<a<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;
	cin.get();
	return 0;
}
