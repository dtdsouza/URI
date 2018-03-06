#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,j,k = 7;
	
	for (i = 1;i < 10;i++)
	{
		for (j = k;j > (k-3);j--)
		{
			cout<<"I="<<i<<" J="<<j<<endl;
			
		}
		k = j+5;
		i++;
	}
	cin.get();
	return 0;
}
