#include <stdio.h>
#include <string.h>
#define max 50

void decodifica(char *str,int tam,int desloc)
{
	int i;
	for(i=0;i<tam;i++)
	{
		if ( str[i] - desloc >= 65 )
		{
			str[i] -= desloc;
		}
		else
		{
			str[i] = 91 - (65-(str[i]-desloc));
		}
	}
}

int main()
{
	int n,i,desloc,j,tam;
	char string[max];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",string);
		scanf("%d",&desloc);
		tam = strlen(string);
		decodifica(string,tam,desloc);
		printf("%s\n",string);
	}	
	return 0;
}
