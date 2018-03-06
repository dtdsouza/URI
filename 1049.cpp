#include <iostream>
#include <locale>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	string vert,tipo,alim;
	
	cin>>vert>>tipo>>alim;
	
	if (vert == "vertebrado")
	{
		if (tipo == "ave")
		{
			if (alim == "carnivoro")
			{
				cout<<"aguia"<<endl;
			}
			else if (alim == "onivoro")
			{
				cout<<"pomba"<<endl;
			}
		}
		else if (tipo == "mamifero")
		{
			if (alim == "onivoro")
			{
				cout<<"homem"<<endl;
			}
			else if (alim == "herbivoro")
			{
				cout<<"vaca"<<endl;
			}
		}
	}
	else if (vert == "invertebrado")
	{
		if (tipo == "inseto")
		{
			if (alim == "hematofago")
			{
				cout<<"pulga"<<endl;
			}
			else if (alim == "herbivoro")
			{
				cout<<"lagarta"<<endl;
			}
		}
		else if (tipo == "anelideo")
		{
			if (alim == "hematofago")
			{
				cout<<"sanguessuga"<<endl;
			}
			else if (alim == "onivoro")
			{
				cout<<"minhoca"<<endl;
			}
		}
	}
	cin.get();
	return 0;
}
