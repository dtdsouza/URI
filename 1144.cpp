#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int i;
	for (i = 1;i <= 5;i++)
	{
		if(i == 5)
		{
			cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<" "<<endl;
			cout<<i<<" "<<pow(i,2)+1<<" "<<pow(i,3)+1<<endl;			
		}
		else
		{
			cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<" "<<endl;
			cout<<i<<" "<<pow(i,2)+1<<" "<<pow(i,3)+1<<" "<<endl;			
		}

	}
	return 0;
}
