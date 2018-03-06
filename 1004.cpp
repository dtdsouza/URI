#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int a,b,PROD;
	setlocale(LC_ALL,("Portuguese"));
	
	cin >> a;
	cin >> b;
	PROD = a * b;
	cout << "PROD = " << PROD <<endl;
	cin.get();
	return 0;
}
