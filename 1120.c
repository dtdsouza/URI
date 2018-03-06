#include <stdio.h>
#include <string.h>
#define max 100

int main()
{
	int n,j,k,i,tam;
	char c,str[max];
	
	scanf("%c",&c);
	scanf("%s",str);	
	while ( (c != '0' ) || (str[0] != '0') )
	{
		tam = strlen(str);
		for(j=0;j<tam;j++)
		{
			if( str[j] == c )
			{
				for(k=j;k<tam;k++)
				{
					str[k] = str[k+1];
				}
				j--;
				tam--;
			}
		}
		
		for(j=0;j<tam;j++)
		{
			if( str[j] != '0')
				break;
			else if ( j != tam-1 )
			{
				for(k=j;k<tam;k++)
				{
					str[k] = str[k+1]; 
				}
				j--;
				tam--;
			}
		}
		if (!tam)
		{
			str[0] = '0';
			str[1] = '\0';
		}
		printf("%s\n",str);
		getchar();
		scanf("%c",&c);
		scanf("%s",str);
	}
	
	return 0;
}
