#ifndef variadic_functions
#define variadic_functions

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct token - format check
 * @token: input function
 * @f: pointer funciton
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
