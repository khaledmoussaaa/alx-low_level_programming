#include "main.h"

/**
 * _isdigit - check upper case
 *
 * @c: input function
 *
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
