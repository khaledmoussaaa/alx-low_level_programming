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
	int num;
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long sum;

	for (num = 0; num < 50; num++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%lu", sum);
		if (num == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
