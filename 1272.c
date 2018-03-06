#include <stdio.h>
#define max 25

int main()
{
	int n,i,ver,cont;
	char c,msg[max];
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		cont=0;
		ver = -1;
		while ( (c = getchar()) != '\n' )
		{
			if (c == 32)
				ver = 1;
			else if( ver == -1)
			{
				msg[cont] = c;
				cont++;
				ver=0;
			}
			else if ( ver )
			{
				msg[cont] = c;
				cont++;
				ver=0;
			}
		}
		msg[cont] = '\0';
		printf("%s\n",msg);
	}
	return 0;
}
