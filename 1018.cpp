#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,quant,notas[]={100,50,20,10,5,2,1,0},j;
	j=0;
	cin>>n;
	cout<<n<<endl;
	do
	{
		quant = n/notas[j];
		cout<<quant<<" nota(s) de R$ "<<notas[j]<<",00"<<endl;
		n = n - quant * notas[j];
		j++;
	} 	while (notas[j] != 0);
	cin.get();
	return 0;
}

