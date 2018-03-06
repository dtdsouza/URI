#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	double r,pi = 3.14159;
	cin >> r;
	
	cout << "A=" << fixed << setprecision(4) <<pow(r,2)*pi <<endl;
	
	return 0;
}
