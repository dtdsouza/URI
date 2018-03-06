#include <iostream>
#include <iomanip>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int gols_i,gols_g,grenais = 0;
	int i = 0,g = 0,verifica,e = 0;
	
	do
	{	
		cin>>gols_i>>gols_g;
		if(gols_i > gols_g)
		{
			i++;
		}
		else if (gols_i < gols_g)
		{
			g++;
		}
		else
		{
			e++;
		}
		grenais++;
		
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>verifica;
		
	} while (verifica == 1);
	
	cout<<grenais<<" grenais"<<endl;
	cout<<"Inter:"<<i<<endl;
	cout<<"Gremio:"<<g<<endl;
	cout<<"Empates:"<<e<<endl;
	if (i > g)
	{
		cout<<"Inter venceu mais"<<endl;
	}
	else if (i < g)
	{
		cout<<"Gremio venceu mais"<<endl;
	}
	else
	{
		cout<<"Nao houve vencedor"<<endl;
	}
	cin.get();
	return 0;
}
