#include <stdlib.h>

/**
* main - entry point
*
*Description: check lowercase
*
*Return: 0 (success)
*/

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar (alph);
		alph++;
	}
	putchar("\n");
	return (0);
}
