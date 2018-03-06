#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
int main()
{
	double n1,n2,MEDIA;
	setlocale(LC_ALL,"Portuguese");
	
	cin >> n1 >> n2;
	MEDIA = (0.35 * n1) + (0.75 * n2);
	MEDIA = (10 * MEDIA)/11;
	cout << "MEDIA = " <<fixed<<setprecision(5)<<MEDIA<<endl;
	cin.get();
	return 0;
}
