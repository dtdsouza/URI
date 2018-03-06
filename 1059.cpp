#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	for (i = 2;i <= 100;i = i+2)
		cout<<i<<endl;
	cin.get();
	return 0;
}
