#include "main.h"

/**
* _isalpha - checks if character is lowercase or uppercase
*
* @c: takes from input
*
* Return: 1 for upper and 0 for lower
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
