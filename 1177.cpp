#include <iostream>

using namespace std;
int main()
{
	int n[1000],x,i,j;
	cin>>x;
	for (i = 0;i < 1000;i++)
	{
		for (j = 0; j < x;j++)
		{
			if (i < 1000)
			{
				n[i] = j;
				cout<<"N["<<i<<"] = "<<n[i]<<endl;
			}
			i++;
		}
		i--;
	}
	return 0;
}
