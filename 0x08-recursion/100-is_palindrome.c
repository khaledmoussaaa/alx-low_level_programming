#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *is_palindrome - returns the natural square root of a number.
 *@s: input function
 *@start: input function
 *@end: input function
 *Return: 1,0
*/
int check(char *s, int start, int end);
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check(s, 0, len - 1));
}

/**
 *check - is_palindrome
 *@s: input function
 *@start: input function
 *@end: input function
 *Return: 1,0
*/
int check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check(s, start + 1, end - 1));
}
