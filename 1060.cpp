#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,j=0;
	double n[6];
	for (i = 0; i < 6;i++)
	{
		cin>>n[i];
		if (n[i] > 0)
		{
			j = j+1;
		}
	}
	cout<<j<<" valores positivos"<<endl;
	cin.get();
	return 0;
}
