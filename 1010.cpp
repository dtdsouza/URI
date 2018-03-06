#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int codigo1,codigo2,numero1,numero2;
	float valor1,valor2,valor_final;
	
	cin>>codigo1>>numero1>>valor1;
	cin>>codigo2>>numero2>>valor2;
	valor_final = (numero1*valor1) + (numero2*valor2);
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<valor_final<<endl;
	cin.get();
	return 0;
}
