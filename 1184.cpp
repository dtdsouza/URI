#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int i,j;
	float saida = 0;
	float matriz[12][12];
	char op;
	
	cin>>op;
	
	for (i = 0;i < 12;i++)
	{
		for (j = 0;j < 12;j++)
		{
			cin>>matriz[i][j];
			if (i > j)
			{
				saida += matriz[i][j];
			}
		}
	}
	if (op == 'S')
	{
		cout<<fixed<<setprecision(1)<<saida<<endl;
	}
	else if (op == 'M')
	{
		saida /= 66;
		cout<<fixed<<setprecision(1)<<saida<<endl;
	}
	return 0;
}
