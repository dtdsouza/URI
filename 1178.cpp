#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double n,x[100];
	int i,j;
	
	cin>>n;
	for (i = 0;i<100;i++)
	{
		if (i == 0)
		{
			x[i] = n;
		}
		else
		{
			x[i] = x[i-1]/2;
		}
		cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<x[i]<<endl;
	}
	return 0;
}
