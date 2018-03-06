#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int t,n,i;
	unsigned long long int fib[61];
	
	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i < 61;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	cin>>t;
	for (i = 0;i<t;i++)
	{
		cin>>n;
		cout<<"Fib("<<n<<") = "<<fib[n]<<endl;
	}
	cin.get();
	return 0;
}
