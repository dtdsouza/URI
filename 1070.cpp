#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,resto;
	cin>>n;
	resto = n%2;
	if (resto == 0)
	{
		for (i = 0;i < 6; i++)
		{
			n++;
			cout<<n<<endl;
			n++;
		}
	}
	else
	{
		for (i = 0; i < 6; i++)
		{
			cout<<n<<endl;
			n += 2;
		}
	}
	cin.get();
	return 0;
}
