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
        float evenSum;
        unsigned long f1 = 0;
        unsigned long f2 = 1;
        unsigned long sum;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
		       break;	

                if (sum % 2 == 0)
			evenSum = evenSum + sum;
		f1 = f2;
		f2 = sum;
        }
	printf("%.0f\n", evenSum);
        return (0);
}
