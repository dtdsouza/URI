#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x = 0,y = 1,aux,n,i;
	
	cin>>n;
	for (i = 0;i < n;i++)
	{
		if (i == n-1)
		{
			aux = x+y;
			cout<<aux<<endl;			
		}
		else
		{
				if (i == 0)
				{
					aux = x;
				}
				else if (i == 1)
				{
					aux = y;
				}
				else
				{
					aux = x+y;
					x = y;
					y = aux;
				}
			cout<<aux<<" ";
		}
	}
	cin.get();
	return 0;
}
