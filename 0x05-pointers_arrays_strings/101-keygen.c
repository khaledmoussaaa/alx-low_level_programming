#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int pass;
	char c;

	srand(time(NULL));
	while (pass <= 2645)
	{
		c = rand() % 128;
		pass = pass + c;
		putchar(c);
	}
	putchar(2772 - pass);
	return (0);
}

