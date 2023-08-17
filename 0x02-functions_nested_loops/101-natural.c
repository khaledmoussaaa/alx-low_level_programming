#include "main.h"

/**
 * main - entry point
 *
 * Description: print sum for number divide on 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int sum, n;

	for (n = 0; n <= 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	printf("%i\n", sum);
	return (0);
}
