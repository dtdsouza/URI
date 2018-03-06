#include <iostream>
#include <math.h>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,j,exp,x = 0;
	
	cin>>n;
	for (i = 0;i < n;i++)
	{
		x++;
		exp = x;
		for (j = 0;j < 3;j++)
		{
			cout<<exp<<" ";
			exp = x*exp;
		}
		cout<<endl;			
	}
	cin.get();
	return 0;
}
