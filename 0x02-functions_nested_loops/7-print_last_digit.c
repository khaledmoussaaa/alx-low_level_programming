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

	if (n < 0)
	{
		last = (n % 10) * -1;
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);
}
