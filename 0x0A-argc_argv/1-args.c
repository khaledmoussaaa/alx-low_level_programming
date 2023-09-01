#include <stdio.h>

/**
 * main - print the program name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
