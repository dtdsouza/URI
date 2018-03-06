#include <stdio.h>
#include <math.h>

void ordena(float *a,float *b,float *c);

int main()
{
	float a,b,c,verifica;
	scanf("%f %f %f",&a,&b,&c);
	ordena(&a,&b,&c);
	if ( a >= b+c )
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
		verifica = pow(a,2) - pow(b,2) - pow (c,2);

		if ( verifica == 0 )
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if ( verifica > 0 )
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else
		{
			printf("TRIANGULO ACUTANGULO\n");
		}

		if ( (a==b) && (b==c) )
		{
			printf("TRIANGULO EQUILATERO\n");
		}
		else if ( (a != b) && (b != c) )
		{
		}
		else
		{
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	system("pause");
	return 0;
}

void ordena(float *a,float *b,float *c)
{
	float aux;

	if ( *a < *b)
	{
		aux = *a;
		*a = *b;
		*b = aux;
	}
	if ( *b < *c )
	{
		aux = *b;
		*b = *c;
		*c = aux;
	}
	if ( *a < *b )
	{
		aux = *a;
		*a = *b;
		*b = aux;
	}
}