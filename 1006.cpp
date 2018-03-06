#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double A,B,C,MEDIA;
	
	cin >> A >> B >> C;
	MEDIA = (A*2/10) + (B*3/10) + (C*5/10);
	cout << "MEDIA = " <<fixed<<setprecision(1)<<MEDIA<<endl;
	cin.get();
	return 0;
}

