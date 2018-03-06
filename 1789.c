#include <stdio.h>

int main()
{
	int n,v,max,i;
	while ( scanf("%d",&n) != EOF )
	{
		max = 0;
		for (i=0; i<n;i++)
		{
			scanf("%d",&v);
			if (v>max)
			{
				max = v;
			}
		}
		if ( max<10 )
		{
			printf("1\n");
		}
		else if (max<20)
		{
			printf("2\n");
		}
		else
		{
			printf("3\n");
		}
	}
	return 0;
}