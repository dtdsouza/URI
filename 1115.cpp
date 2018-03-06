#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y;
	
	do 
	{
		cin>>x>>y;
		if ((x>0) && (y>0))
		{
			cout<<"primeiro"<<endl;
		}
		else if ((x>0) && (y<0))
		{
			cout<<"quarto"<<endl;
		}
		else if ((x<0) && (y<0))
		{
			cout<<"terceiro"<<endl;
		}
		else if ((x<0) && (y>0))
		{
			cout<<"segundo"<<endl;
		}
	} while ( (x != 0 ) && ( y != 0) );
	cin.get();
	return 0;
}
