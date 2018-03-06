#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,i;
	
	do
	{
		cin>>x;
		for (i = 1;i <= x;i++)
		{
			if (i == x)
			{
				cout<<i<<endl;
			}
			else
			{
				cout<<i<<" ";
			}
		}	
	} while (x != 0);
	
	cin.get();
	return 0;
}
