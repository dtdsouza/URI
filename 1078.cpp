#include <iostream>
#include <locale>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,mult;
	cin>>n;
	
	for (i = 1; i<=10;i++)
	{
		mult = i*n;
		cout<<i<<" x "<<n<<" = "<<mult<<endl;
	}
	cin.get();
	return 0;
}
