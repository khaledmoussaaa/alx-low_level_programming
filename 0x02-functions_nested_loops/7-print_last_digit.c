#include "main.h"

/**
* print_last_digit -  get last digit
*
*@n: input function
*
*Return: Always 0.
*/

int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
	}
	else if (n < 0)
	{
		last = (n % 10) * -1;
	}
	_putchar(last + 48);
	return (last);
}
