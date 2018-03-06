#include <stdio.h>

int main()
{
	int a,b,c,dif,dif1;
	scanf("%d %d %d",&a,&b,&c);
	dif = a-b;
	dif1 = b-c;
	if(dif > 0)
	{
		if (dif1 <= 0)
			printf(":)\n");
		else if (dif1 < dif)
			printf(":)\n");
		else
			printf(":(\n");

	}
	else if(dif < 0)
	{
		if (dif1 >= 0)
			printf(":(\n");
		else if (dif < dif1)
			printf(":(\n");
		else 
			printf(":)\n");
	}
	else
	{
		if(dif1 < 0)
			printf(":)\n");
		else
			printf(":(\n");
	}
	system("pause");
	return 0;
}