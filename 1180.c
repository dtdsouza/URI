#include <stdio.h>

int main()
{
	int i,n,pos,menor,vetor[1000];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&vetor[i]);
		if (i == 0)
		{
			menor = vetor[i];
			pos = i;
		}
		else
		{
			if(menor > vetor[i])
			{
				menor = vetor[i];
				pos = i;
			}
		}
	}

	printf("Menor valor: %d\nPosicao: %d\n",menor,pos);
	system("pause");
	return 0;
}