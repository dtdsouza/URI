#include <stdio.h>

int main()
{
	int n,i=0;
	char string[] = "LIFE IS NOT A PROBLEM TO BE SOVED";
	scanf("%d",&n);
	while (i<n)
	{
		putchar(string[i]);
		i++;
	}
	printf("\n");
	system("pause");
	return 0;
}