#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n[20],m[20],i,j = 19;
	
	for (i = 0;i < 20; i++)
	{
		cin>>n[i];
		m[j] = n[i];
		j--;
	}
	
	for (j = 0; j<20; j++)
	{
		cout<<"N["<<j<<"] = "<<m[j]<<endl;
	}
	cin.get();
	return 0;
}
