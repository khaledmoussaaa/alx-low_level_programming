#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
