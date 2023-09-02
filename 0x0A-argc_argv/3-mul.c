#include <stdio.h>

/**
 * main - print the program name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	r = n1 * n2;

	printf("%d\n", r);

	return (0);
}
