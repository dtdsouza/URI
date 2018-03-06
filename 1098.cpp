#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float i,j,k=1,l=0;
	
	for (i = 0;i < 2.2;i = i+0.2)
	{
		for(j = k; j < 4+l;j++)
		{
			if (i - floor(i)  == 0)
			{
				cout<<"I="<<fixed<<setprecision(0)<<i<<" J="<<fixed<<setprecision(0)<<j<<endl;			
			}
			else
			{
				cout<<"I="<<fixed<<setprecision(1)<<i<<" J="<<fixed<<setprecision(1)<<j<<endl;				
			}
		}
		k += 0.2;
		l += 0.2;
	}
	cin.get();
	return 0;
}
