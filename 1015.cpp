#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float x1,x2,y1,y2,dab;
	cin>>x1>>y1;
	cin>>x2>>y2;
	dab = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	cout<<fixed<<setprecision(4)<<dab<<endl;
	cin.get();
	return 0;
}
