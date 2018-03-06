#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n;
	cin>>n;

	for (i = 1;i <= n;i++)
	{
		cout<<i<<endl;
		i++;
	}
	
	cin.get();
	return 0;
}
