#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double x,y;
	cin>>x>>y;
	if ((x == 0) && (y == 0))
	{
		cout<<"Origem"<<endl;
	}
	else if(x == 0)
			{
				cout<<"Eixo Y"<<endl;
			}
		 else if(y == 0)
		 	{
		 		cout<<"Eixo X"<<endl;
			}
			 else if ((x < 0) && (y < 0))
			 	  {
			 	  	cout<<"Q3"<<endl;
				  }
				  else if ((x<0) && (y>0))
				  		{
				  			cout<<"Q2"<<endl;
						}
						else if ((x > 0) && (y < 0))
								{
									cout<<"Q4"<<endl;
								}
							 else
							 {
							 	cout<<"Q1"<<endl;
							 }
	cin.get();
	return 0;
}
