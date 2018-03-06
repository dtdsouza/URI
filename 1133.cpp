#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y,resto;
	
	cin>>x>>y;

	if (x > y)
	{
		y++;
		do
		{
			resto = y%5;
			if ((resto == 2) || (resto == 3))
			{
				cout<<y<<endl;
			}
			y++;
		} while (y < x);
	}
	else if (x <y)
	{
		x++;
		do
		{
			resto = x%5;
			if ((resto == 2) || (resto == 3))
			{
				cout<<x<<endl;
			}
			x++;
		} while (x < y)	;	
	}

	cin.get();
	return 0;
}
