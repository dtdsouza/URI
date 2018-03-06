#include <iostream>
#include <locale>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	string a;
	char b;
	
	int dia_i,dia_f,hora_i,hora_f,min_i,min_f,seg_i,seg_f,verifica;
	
	cin>>a>>dia_i;
	cin>>hora_i>>b>>min_i>>b>>seg_i;

	cin>>a>>dia_f;
	cin>>hora_f>>b>>min_f>>b>>seg_f;
	
	verifica = seg_f - seg_i;
	if (verifica < 0)
	{
		seg_f = (seg_f + 60) - seg_i;
		min_f--;
	}
	else
	{
		seg_f -= seg_i;
	}
	
	
	verifica = min_f - min_i;
	if (verifica < 0)
	{
		min_f = (min_f + 60) - min_i;
		hora_f--;
	}
	else
	{
		min_f -= min_i;
	}
	
	
	verifica = hora_f - hora_i;
	if (verifica < 0)
	{
		hora_f = (hora_f + 24) - hora_i;
		dia_f--;
	}
	else
	{
		hora_f -= hora_i;
	}
	
	
	verifica = dia_f - dia_i;
	if (verifica < 0)
	{
		dia_f = 0;
	}
	else
	{
		dia_f -= dia_i;
	}
	
	cout<<dia_f<<" dia(s)"<<endl;
	cout<<hora_f<<" hora(s)"<<endl;
	cout<<min_f<<" minuto(s)"<<endl;
	cout<<seg_f<<" segundo(s)"<<endl;
	
	cin.get();
	return 0;
}
