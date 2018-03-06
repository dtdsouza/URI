#include <iostream>
#include <locale>
#include <iomanip>
#include <string>
#define comicao 0.15

using std::string;
using std::getline;
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	string nome;
	double vendas,salario,salario_final;
	getline(cin,nome);
	cin>>salario>>vendas;
	salario_final = salario + vendas*comicao;
	cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salario_final<<endl; 
	cin.get();
	return 0;
}
