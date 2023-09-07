#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply - multiply two numbers
 * @num1: input function
 * @num2: input function
 * Return: integers
*/

int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * isNumber - check is number or not
 * @str: input function
 * Return: 1 or 0
*/

int isNumber(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * *main - print the result of multiply followed by new line
 * @argc: input function
 * @argv: input function
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	char *num1Str = argv[1];
	char *num2Str = argv[2];

	if (!isNumber(num1Str) || !isNumber(num2Str))
	{
		printf("Error\n");
		exit(98);
	}
	int num1 = atoi(num1Str);
	int num2 = atoi(num2Str);
	int result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
