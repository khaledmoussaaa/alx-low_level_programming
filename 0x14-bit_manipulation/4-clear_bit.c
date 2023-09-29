#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsgined inetger
 * @index: index of bit
 * Return: 1 ture, -1 false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
