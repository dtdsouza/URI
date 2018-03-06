#include <stdio.h>

int main()
{
	int i,n,r1,r2,r;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d %d",&r1,&r2);
		r = r1+r2;
		printf("%d\n",r);
	}
	system("pause");
	return 0;
}