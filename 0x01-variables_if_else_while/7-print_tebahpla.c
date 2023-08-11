#include<stdio.h>

/**
* main - entry point
*
* Description: print alphabet by reverse from z to a
*
* Return: 0 (success)
*/

int main(void)
{
	int digitRev = 'z';

	while (digitRev >= 'a')
	{
		putchar(digitRev);
		digitRev--;
	}
	putchar('\n');
	return (0);
}
