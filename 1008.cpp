#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int numero,horas;
	float valor_hr,salario;
	cin>>numero>>horas>>valor_hr;
	salario = valor_hr * horas;
	cout<<"NUMBER = "<<numero<<"\nSALARY = U$ "<<fixed<<setprecision(2)<<salario<<endl;	
	cin.get();
	return 0;
}
