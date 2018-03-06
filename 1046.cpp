#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int inicio,fim,tempo;
	cin>>inicio>>fim;
	if (fim < inicio)
	{
		tempo = ((24 - inicio) + fim);
	}
	else if(inicio == fim)
		{
			tempo = 24;
		}
		else
		{
			tempo = (fim - inicio);
		}
	cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<endl;
	cin.get();
	return 0;
}
