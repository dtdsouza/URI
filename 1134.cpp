#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	int x,i,alcool = 0,gasolina = 0,diesel = 0;
	
	do
	{
		i = 0;
		cin>>x;
		switch (x)
		{
			case 1:
				alcool++;
				i++;
				break;
				
			case 2:
				gasolina++;
				i++;
				break;
			
			case 3:
				diesel++;
				i++;
				break;
				
			case 4:
				break;
				
			default :
				i++;
				break;
		} 
	} while (i > 0);
	
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<alcool<<endl;
	cout<<"Gasolina: "<<gasolina<<endl;
	cout<<"Diesel: "<<diesel<<endl;
	cin.get();
	return 0;
}
