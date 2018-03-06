#include <stdio.h>
#include <string.h>

int main()
{
	int size,i,j,k,l;
	char string[50];
	while(gets(string) != NULL)
	{
		size = strlen(string);
		for(i=0;i<size;i++)
		{
			if(string[i] == '_')
			{
				printf("<i>");
				for(j=i+1;j<size;j++)
				{
					if(string[j] == '_')
					{
						printf("</i>");
						j++;
						break;
					}
					else
						putchar(string[j]);
				}
				i = j-1;
			}
			else if(string[i] == '*')
			{
				printf("<b>");
				for(j=i+1;j<size;j++)
				{
					if(string[j] == '*')
					{
						printf("</b>");
						j++;
						break;
					}
					else
						putchar(string[j]);					
				}
				i = j-1;
			}
			else
				putchar(string[i]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}