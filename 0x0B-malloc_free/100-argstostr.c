#include "main.h"

/**
 * getSize - return size of string.
 * @s: input function
 * Return: Integer
 */

int getSize(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: input function
 * @av: input function
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, word;
	char *locSize;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, size++)
		size = size + getSize(av[i]);
	locSize = malloc(sizeof(char) * size + 1);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, word++)
			locSize[word] = av[i][j];
		locSize[word] = '\n';
		word++;
	}
	locSize[word] = '\0';
	return (locSize);
}
