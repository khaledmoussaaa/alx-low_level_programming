#include "main.h"

/**
*print_to_98 - prints all natural numbers from n to 98, followed by a new line.
*
*@n: input function
*
*Return: 0
*/

void print_to_98(int n)
{
	int counter;

	if (n < 98)
	{
		for (counter = n; counter < 98; counter++)
			printf("%i ", counter);
	else
		for (counter = n; counter > 98; counter--)
			print("%i ", counter);
	printf("98\n");
}
