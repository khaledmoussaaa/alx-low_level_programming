#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, change = 0, remind = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (remind >= cents[i])
			{
				change += remind / cents[i];
				remind = remind % cents[i];
				if (remind % cents[i] == 0)
					break;
			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
