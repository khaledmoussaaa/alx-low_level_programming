#include "main.h"

/**
 * _islower -  check lower character if lowercase
 *
 *@c: check input
 *
 * Return: return 1 if lowercase otherwise return 0
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
