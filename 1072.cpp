#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,i,in=0,out=0;
	cin>>x;
	long long int n[x];
	
	for (i = 0; i < x;i++)
	{
		cin>>n[i];
		if ((n[i]>=10) && (n[i<=20]))
		{
			in++;
		}
		else
		{
			out++;
		}
	}
	
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	
	cin.get();
	return 0;
}
