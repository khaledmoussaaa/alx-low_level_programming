#include "main.h"

/**
 *_print_rev_recursion - prints a string in reverse.
 *@s: input function
 *Return: zero
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
