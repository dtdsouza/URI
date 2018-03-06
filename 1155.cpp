#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	double r = 0;
	
	for (i = 1 ;i < 101;i++)
	{
		r += 1/(float)i;
	}
	cout<<fixed<<setprecision(2)<<r<<endl;
	
	return 0;
}
