#include <stdio.h>
#include <string.h>
#define max 1000

int encaixa(char *str1,char *str2)
{
	int i,tam1,tam2,verifica=0;
	
	tam1=strlen(str1);
	tam2=strlen(str2);
	
	if(tam2 > tam1)
		return 0;
	else
	{
		for(i=0;i<tam2;i++)
		{
			if ( str1[tam1-tam2+i] != str2[i] )
				return 0;
		}
		return 1;
	}
}

int main()
{
	char str1[max],str2[max],tam1,tam2;
	int n,i,j;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",str1,str2);
		if ( encaixa(str1,str2) )
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}
	return 0;
}
