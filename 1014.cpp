#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int X;
	float Y,CM;
	cin>>X>>Y;
	CM = X/Y;
	cout<<fixed<<setprecision(3)<<CM<<" km/l"<<endl;
	
	cin.get();
	return 0;
}
