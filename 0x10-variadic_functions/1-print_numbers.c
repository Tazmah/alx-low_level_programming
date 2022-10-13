#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - afunction that print numbers
 * @separator: param 1
 * @n: param 2
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int result, i = 0;

	if (separator == NULL)
		;
	else
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			result = va_arg(args, unsigned int);
			printf("%d", result);
			printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
