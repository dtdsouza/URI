#include <stdio.h>

int main()
{
	int i,n,a,b,c;
	int S_try = 0,B_try = 0,A_try = 0;
	float S_do=0,B_do = 0,A_do = 0;
	float S,A,B;
	char nome[50];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",nome);
		scanf("%d %d %d",&a,&b,&c);
		S_try += a;
		B_try += b;
		A_try += c;
		scanf("%d %d %d",&a,&b,&c);
		S_do += a;
		B_do += b;
		A_do += c; 
	}

	S = (S_do/S_try)*100;
	A = (A_do/A_try)*100;
	B = (B_do/B_try)*100;

	printf("Pontos de Saque: %.2f %%.\n",S);
	printf("Pontos de Bloqueio: %.2f %%.\n",B);
	printf("Pontos de Ataque: %.2f %%.\n",A);

	return 0;
}