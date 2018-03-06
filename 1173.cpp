#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x[10],i=0;

	while (i<10)
	{
		if (i == 0)
		{
			cin>>x[i];
		}
		else
		{
			x[i] = x[i-1] * 2;
		}
		cout<<"N["<<i<<"] = "<<x[i]<<endl;
		i++;
	}
	cin.get();
	return 0;
}
