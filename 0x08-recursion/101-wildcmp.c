#include "main.h"

/**
 *wildcmp - returns the natural square root of a number.
 *@s1: input function
 *@s2: input function
 *Return: 1,0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
	return (0);
}
