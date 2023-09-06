#include "main.h"
/**
 * countWords - count string
 * @str: input function
 * Return: integer
 */
int countWords(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}
	count++;
	return (count);
}
/**
 * strtow - splits a string into words.
 * @str: input function
 * Return: count
 */
char **strtow(char *str)
{
	int i = 0, j, k, l, count = 0, wc = 0;
	char **mall;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = countWords(str);
	if (count == 1)
		return (NULL);
	mall = (char **)malloc(count * sizeof(char *));
	if (mall == NULL)
		return (NULL);
	mall[count - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			mall[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (mall[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(mall[k]);
				free(mall[count - 1]);
				free(mall);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				mall[wc][l] = str[i + l];
			mall[wc][l] = '\0';
			wc++;
			i = i + j;
		}
		else
			i++;
	}
	return (mall);
}
