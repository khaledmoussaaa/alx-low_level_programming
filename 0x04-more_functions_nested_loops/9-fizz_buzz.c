#include "main.h"

/**
 * main - print numbers from 1 to 100
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && !(number % 5 == 0))
			printf("Fizz");
		else if (number % 5 == 0 && !(number % 3 == 0))
			printf("Buzz");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", number);

		if (number != 100)
			printf(" ");
		else
			prinf("\n");
	}
	return (0);
}
