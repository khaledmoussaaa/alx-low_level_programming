#include <stdio.h>

/**
* main - entry point
*
*Description: check lowercase and uppercase
*
*Return: 0 (success)
*/

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}

	putchar('\n');
	return (0);
}
