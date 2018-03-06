#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c,MAIORAB;
	cin>>a>>b>>c;
	MAIORAB = (a+b+abs(a-b))/2;
	MAIORAB = (MAIORAB + c + abs(MAIORAB-c))/2;
	cout<<MAIORAB<<" eh o maior"<<endl;
	
	cin.get();
	return 0;
}
