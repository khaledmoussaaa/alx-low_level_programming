#include "main.h"
/**
*get_endianness - returns checks the endianness.
*Return: 0 big, 1 small
*/
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
