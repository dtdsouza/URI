#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,j,i,C = 0,R = 0,S = 0;
	float p_c,p_s,p_r,tot_cobaia = 0;
	char animal;
	
	cin>>n;
	j = n;
	for (i = 0;i < j;i++)
	{
		cin>>n;
    	cin>>animal;
    	tot_cobaia += n;
    	if (animal == 'C')
    	{
    		C += n;
		}
		else if (animal == 'R')
		{
			R += n;
		}
		else if (animal == 'S')
		{
			S += n;
		}
	}
	
	p_c = (C/tot_cobaia)*100;
	p_r = (R/tot_cobaia)*100;
	p_s = (S/tot_cobaia)*100;
	
	cout<<"Total: "<<tot_cobaia<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<C<<endl;
	cout<<"Total de ratos: "<<R<<endl;
	cout<<"Total de sapos: "<<S<<endl;
	cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<p_c<<" %"<<endl;
	cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<p_r<<" %"<<endl;
	cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<p_s<<" %"<<endl;
	
	cin.get();
	return 0;
}
