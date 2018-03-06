#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int cod,quant;
	float valor;
	cin>>cod>>quant;
	switch (cod)
	{
		case 1:
			valor = quant * 4.00;
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<valor<<endl;
			break;
		case 2:
			valor = quant * 4.50;
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<valor<<endl;
			break;
		case 3:
			valor = quant * 5.00;
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<valor<<endl;
			break;
		case 4:
			valor = quant * 2.00;
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<valor<<endl;
			break;
		case 5:
			valor = quant * 1.50;
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<valor<<endl;
			break;
	}
	cin.get();
	return 0;
}
