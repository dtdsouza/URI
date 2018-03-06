#include <stdio.h>
#include <string.h> //strlen

int main()
{
	// n = numbes of test cases; size_1 = size of string_1; size_2 = size of string_2;
	int n,j,i,size_1,size_2,ver_1,ver_2;
	char string_1[51],string_2[51];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",string_1);
		scanf("%s",string_2);
		size_1 = strlen(string_1);
		size_2 = strlen(string_2);

		ver_1=0;
		ver_2=0;

		if(size_1 > size_2)
		{
			for(j=0;j<size_1;j++)
			{
				if(string_1[j] != '\0' && ver_1==0)
					putchar(string_1[j]);
				else
					ver_1++;

				if(string_2[j] != '\0' && ver_2==0)
					putchar(string_2[j]);
				else
					ver_2++;
			}
		}
		else
		{
			for(j=0;j<size_2;j++)
			{
				if(string_1[j] != '\0' && ver_1==0)
					putchar(string_1[j]);
				else
					ver_1++;

				if(string_2[j] != '\0' && ver_2==0)
					putchar(string_2[j]);
				else
					ver_2++;
			}			
		}
		printf("\n");
	}
	system("pause");
	return 0;
}