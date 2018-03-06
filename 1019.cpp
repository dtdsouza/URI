#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,h,m,s;
	cin>>n;
	m = n/60;
	s = n%60;
	h = m/60;
	m = m%60;
	cout<<h<<":"<<m<<":"<<s<<endl;
	cin.get();
	return 0;
}
