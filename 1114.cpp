#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int senha;
	do
	{
		cin>>senha;
		switch (senha)
		{
			case 2002:
				cout<<"Acesso Permitido"<<endl;
				break;
			
			default :
				cout<<"Senha Invalida"<<endl;
				break;
		}
	} while (senha != 2002);
	cin.get();
	return 0;
}

