#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int fat,n,i;
	
	cin>>n;
	fat = n;
	for (i = n-1;i > 0;i--)
	{
		fat = fat*i;
	}
	cout<<fat<<endl;
	cin.get();
	return 0;
}
