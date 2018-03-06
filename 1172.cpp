#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x[10],i = 0;
	
	while (i < 10)
	{
		cin>>x[i];
		
		if (x[i] <= 0)
		{
			x[i] = 1;
		}
		
		cout<<"X["<<i<<"] = "<<x[i]<<endl;
		i++;
	}
	
	cin.get();
	return 0;
}
