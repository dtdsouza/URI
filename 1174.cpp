#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float x[100];
	int i=0;
	while (i < 100)
	{
		x[i] = 0;
		cin>>x[i];
		if(x[i] <= 10)
		{
			cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<x[i]<<endl;
		}
		i++;
	}
	cin.get();
	return 0;
}
