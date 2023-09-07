#include "main.h"

/**
 * getSize - get size of string
 * @s: input function
 * Return: integer
 */
int getSize(char *s)
{
	int  i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
*string_nconcat - concatenates two strings.
*@s1: input function
*@s2: input function
*@n: input function
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = getSize(s1);
	size2 = getSize(s2);
	conc = malloc(size1 + n + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		conc[i] = s2[j];
	conc[i] = '\0';
	return (conc);
}
