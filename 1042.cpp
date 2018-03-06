#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i=0,n[4],max,min,meio;
	while (i < 3)
	{
		cin>>n[i];
		if(i == 0)
		{
			min = n[i];
			max = n[i];
			meio = n[i];
		}
		else if(n[i]>max){
			max = n[i];
			}
			else if(n[i]<min){
				min = n[i];
				}
				else
				{
					meio = n[i];
				}
		i++;
	}
	cout<<min<<endl<<meio<<endl<<max<<endl;
	cout<<endl;
	cout<<n[0]<<endl<<n[1]<<endl<<n[2]<<endl;
	cin.get();
	return 0;
}
