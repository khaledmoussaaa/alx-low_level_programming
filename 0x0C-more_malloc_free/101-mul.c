#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*multiply - multiply two numbers
*@num1: input function
*@num2: input function
*Return: integers
*/
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
*isNumber - check is number or digit
*@str: input function
*Return: integers
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
*printError - print error message
*/
void printError(void)
{
	printf("Error\n");
}
/**
*printResult - print the result
*@result: input function
*/
void printResult(int result)
{
	printf("%d\n", result);
}
/**
*main - print multiplicaton numbers
*@argc: input function
*@argv: input function
*Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printError();
		exit(98);
	}
	char *num1Str = argv[1];
	char *num2Str = argv[2];

	if (!isNumber(num1Str) || !isNumber(num2Str))
	{
		printError();
		exit(98);
	}
	int num1 = atoi(num1Str);
	int num2 = atoi(num2Str);
	int result = multiply(num1, num2);

	printResult(result);
	return (0);
}
