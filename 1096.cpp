#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i=1,j;
	do
	{
		cout<<"I="<<i<<" J=7"<<endl;
		cout<<"I="<<i<<" J=6"<<endl;
		cout<<"I="<<i<<" J=5"<<endl;
		i += 2;
	} while (i <= 9);
	
	cin.get();
	return 0;
}
