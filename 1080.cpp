#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,pos,max;
	
	for (i = 1; i < 101; i++)
	{
		cin>>n;
		if (i == 0)
		{
			max = n;
			pos = i;
		}
		else if ( n > max)
		{
			max = n;
			pos = i;
		}
	}
	cout<<max<<endl<<pos<<endl;
	cin.get();
	return 0;
}
