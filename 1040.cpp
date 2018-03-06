#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i = 0;
	double n[5],media;
	media = 0;
	while (i<4){
		cin>>n[i];
		switch (i)
		{
			case 0:
				n[i] = n[i]*2/10;
				media = media + n[i];
				break;
			case 1:
				n[i] = n[i]*3/10;
				media = media + n[i];
				break;
			case 2:
				n[i] = n[i]*4/10;
				media = media + n[i];
				break;
			case 3:
				n[i] = n[i]/10;
				media = media + n[i];
				break;
		}
		i++;
	}
	cout<<"Media: "<<fixed<<setprecision(1)<<media<<endl;
	if (media >= 7.0)
	{
		cout<<"Aluno aprovado."<<endl;
	}
	else if(media < 5)
		{
			cout<<"Aluno reprovado."<<endl;
		}
		else
		{
			cout<<"Aluno em exame."<<endl;
			cin>>n[4];
			cout<<"Nota do exame: "<<fixed<<setprecision(1)<<n[4]<<endl;
			media = (media + n[4])/2;
			if(media >= 5){
				cout<<"Aluno aprovado."<<endl;
			}
			else{
				cout<<"Aluno reprovado."<<endl;
			}
			cout<<"Media final: "<<fixed<<setprecision(1)<<media<<endl;
		}		
	cin.get();
	return 0;
}
