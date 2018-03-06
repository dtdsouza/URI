#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,x,i;
	float y,div;
	cin>>n;
	
	for (i = 0;i < n;i++)
	{
		cin>>x>>y;
		if (y == 0)
		{
			cout<<"divisao impossivel"<<endl;
		}
		else
		{
			div = x/y;
			cout<<fixed<<setprecision(1)<<div<<endl;
		}
	}
	cin.get();
	return 0;
}
