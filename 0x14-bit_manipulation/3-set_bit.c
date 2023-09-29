#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned integer
 * @index: index of bit
 * Return: 1 true, -1 false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
