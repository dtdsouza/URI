#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if ( (a+b<=c) || (b+c<=a) || (a+c<=b) )
		{
			printf("Invalido\n");
		}
	else
	{
		if ( (a==b) && (b==c) )
		{
			printf("Valido-Equilatero\n");
		}
		else if ( (a!=b) && (b!=c) && (a!=c) )
		{
			printf("Valido-Escaleno\n");
		}
		else
		{
			printf("Valido-Isoceles\n");
		}
			printf("Retangulo: ");
		if ( (pow(a,2)==( pow(b,2)+pow(c,2) )) || (pow(b,2)==( pow(a,2)+pow(c,2) )) || (pow(c,2)==( pow(b,2)+pow(a,2) )) )
			printf("S\n");
		else
			printf("N\n");

	}

	return 0;
}