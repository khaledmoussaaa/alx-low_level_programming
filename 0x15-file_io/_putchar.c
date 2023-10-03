#include "main.h"
/**
 * _putcchar - single character.
 * @ch: The charachter
 * Return: 1 if true, -1 if false
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
