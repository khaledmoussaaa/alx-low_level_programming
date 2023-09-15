#include "variadic_functions.h"
/**
 * formatChar - format check
 * @separator: input function
 * @list: argument
 */
void formatChar(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}
/**
 * formatInteger - format check
 * @separator: input function
 * @list: argument
 */
void formatInteger(char *separator, va_list list)
{
	printf("%s%i", separator, va_arg(list, int));
}
/**
 * formatFloat - format check
 * @separator: input function
 * @list: argument
 */
void formatFloat(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}
/**
 * formatString - format check
 * @separator: input function
 * @list: argument
 */
void formatString(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 * print_all - prints strings, followed by a new line.
 * @format: input function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list list;
	token_t tokens[] = {
		{"c", formatChar},
		{"i", formatInteger},
		{"f", formatFloat},
		{"s", formatString},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[i].token[0])
			{
				tokens[j].f(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
