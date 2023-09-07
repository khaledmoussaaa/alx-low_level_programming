#include "main.h"
#include <stdio.h>
/**
*string_nconcat - concatenates two strings.
*@s1: input function
*@s2: input function
*@n: input function
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0' size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	conc = malloc(size1 + n + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		conc[i] = s2[j];
		i++;
	}
	conc[i] = '\0';
	return (conc);
}
