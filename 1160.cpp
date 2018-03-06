#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i,anos,pa,pb;
	double ta,tb;
	cin>>n;
	for (i = 0;i < n;i++)
	{
		cin>>pa>>pb>>ta>>tb;
		anos = 0;
		do
		{
			pa += (int)(pa*(ta/100));
			pb += (int)(pb*(tb/100));

			anos++;
			if (anos > 100)
			{
				pa = pb + 1;
				cout<<"Mais de 1 seculo."<<endl;
			}
		} while (pb >= pa);
		if (anos <= 100)
		{
			cout<<anos<<" anos."<<endl;
		}
	}
	return 0;
}
