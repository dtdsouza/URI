#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y,i,j;
	
	cin>>x>>y;
	for (i = 1;i <= y;i++)
	{
		for (j = 0;j < x;j++)
		{
			if (j == (x-1) && (i <= y))
			{
				cout<<i<<endl;
			}
			else if (i <= y)
			{
				cout<<i<<" ";
			}
			i++;
		}
		i--;
	}
	cin.get();
	return 0;
}
