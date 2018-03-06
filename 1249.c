#include <stdio.h>
#include <string.h>
#define max 50

int main()
{
	char str[50];
	int i,tam;
	
	while(scanf("%[^\n]s",str) != EOF)
	{
		tam=strlen(str);
		for(i=0;i<tam;i++)
		{
			if( str[i] > 64 && str[i] < 91 )
			{
				if (str[i] < 78)
					str[i] += 13;
				else
					str[i]=64 + 13 - (90-str[i]);
			}
			else if ( str[i] > 96 && str[i] < 123 )
			{
				if ( str[i] < 110 )
					str[i] += 13;
				else
					str[i] = 96 +  13 - ( 122 - str[i] );
			}
		}
		getchar();
		printf("%s\n",str);
	}
	
	return 0;
}
