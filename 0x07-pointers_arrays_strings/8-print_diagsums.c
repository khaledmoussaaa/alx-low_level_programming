#include "main.h"

/**
*print_diagsums - prints the sum of the two diagonals of matrix.
*@a: input fnction
*@size: input fnction
*
*Return: zero
*/
void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	d1 = 0;
	d2 = 0;
	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i];
		d2 = d2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
