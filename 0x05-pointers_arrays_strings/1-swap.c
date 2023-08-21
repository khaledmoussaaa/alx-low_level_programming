#include "main.h"

/**
 *swap_int - takes a pinter and update to 98 integer
 *
 *@a: input function
 *@b: input function
 *
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
