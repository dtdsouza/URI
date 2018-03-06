#include <stdio.h>
#include <string.h>



int main()
{
	int i,tam,verifica;
	char string[50];

	while (gets(string) != NULL )
	{
		tam = strlen(string);
		verifica = 0;
		for(i=0;i<tam;i++)
		{
			if (verifica%2)
			{
					if ( (string[i] >= 65) && (string[i] <= 90) )
					{
						string[i] += 32;
						verifica++;
					}
					else if ( (string[i] >= 97) && (string[i] <= 122) )
						verifica++;
			}
			else
			{
					if ( (string[i] >= 97) && (string[i] <= 122) )
					{
						string[i] -= 32;
						verifica++;
					}
					else if ( (string[i] >= 65) && (string[i] <= 90) )
						verifica++;
			}

		}
		printf("%s\n",string);
	}

		system("pause");
	return 0;
}