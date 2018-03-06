#include <stdio.h>

int main()
{
	int n,i;
	float aux,c;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		aux=0;
		scanf("%f",&c);
		while ( c>1 )
		{
			c /= 2;
			aux++; 
		}
		printf("%.0f dias\n",aux);
	}
	
	return 0;
}
