#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: input fucntion
 * @n: input function
 *
 * Return: Zero
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%i", a[i]);
		if (i > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
