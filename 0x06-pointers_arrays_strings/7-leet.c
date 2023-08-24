#include "main.h"

/**
 * leet - capitalizes all words of a string.
 *
 * @ch: input fucntion
 *
 * Return: pointer
 */
char *leet(char *ch)
{
	int i, j;
	char decode[] = "aAeEoOtTlL";
	char encode[] = "4433007711";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ch[i] == decode[j])
			{
				ch[i] = encode[j];
			}
		}
	}
	return (ch);
}
