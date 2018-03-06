#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i = 1 ,j = 60;
	do
	{
		cout<<"I="<<i<<" J="<<j<<endl;
		i += 3;
		j -= 5;
	} while(j >= 0);
	
	cin.get();
	return 0;
}
