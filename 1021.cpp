#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int quant,j;
	double n,notas[]={100.00,50.00,20.00,10.00,5.00,2.00,1.00},moedas[]={1.00,0.50,0.25,0.10,0.05,0.01,0.0};
	j=0;
	cin>>n;
	cout<<"NOTAS:"<<endl;
	do
	{
		quant = n/notas[j];
		cout<<quant<<" nota(s) de R$ "<<fixed<<setprecision(2)<<notas[j]<<endl;
		n = n - quant * notas[j];
		j++;
	} 	while (notas[j] > 1);
	j=0;
	cout<<"MOEDAS:"<<endl;
		do
	{
		quant = n/moedas[j];
		cout<<quant<<" moeda(s) de R$ "<<fixed<<setprecision(2)<<moedas[j]<<endl;
		n = n - quant * moedas[j];
		j++;
	} 	while (moedas[j] > 0.0);
	cin.get();
	return 0;
}
