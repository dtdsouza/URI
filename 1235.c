#include <stdio.h>
#include <string.h> // strlen
int main()
{
	//n = number of test cases; size = size of string; half =  half of string
	int i,j,n,size,half;
	char string[100];

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%[^\n]s",string);
		size = strlen(string);
		half = size/2;
		for(j=half-1;j>=0;j--)
		{
			putchar(string[j]);
		}
		for(j=size-1;j>=half;j--)
		{
			putchar(string[j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}