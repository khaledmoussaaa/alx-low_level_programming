#include "main.h"

/**
 * main - Entry point
 *
 * Descirption: prints _putchar follwed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	char lett[] = "_putchar";

	for (int i = 0; i < 8; i++)
		_putchar(lett[i]);
	_putchar('\n');

	return (0);
}
