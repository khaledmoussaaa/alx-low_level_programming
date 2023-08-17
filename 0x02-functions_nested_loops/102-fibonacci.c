#include "main.h"

/**
 * main - entry point
 *
 * Description: get fibonacci for 50
 *
 * Return: 0
 */
int main(void)
{
	int num, sum;
	int f1 = 0;
	int f2 = 1;

	for (num = 0; num < 50; num++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		prinf("%i", sum);
		if (num == 49)
		{
			printf("\n");
		}
		else
		{
			print(", ");
		}
	}
	return (0);
