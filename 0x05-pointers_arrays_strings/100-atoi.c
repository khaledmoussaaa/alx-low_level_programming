#include "main.h"

/**
 *  _atoi - convert a string to an integer.
 *
 *@s: input function
 *
 * Return: null
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= 48 && *s <= 57)
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
