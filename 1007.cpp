#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A,B,C,D,DIFERENCA;
	cin>>A>>B>>C>>D;
	DIFERENCA = A*B - C*D;
	cout<<"DIFERENCA = "<<DIFERENCA<<endl;
	cin.get();
	return 0;
}
