#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - write a function that print string followed by a new line
 * @separator: param 1
 * @n: param 2
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int string, i = 0;

	if (separator == NULL)
		;
	else
	{
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(args, unsigned int);
			printf("%d",string);
		}
		printf("\n");
		va_end(args);
	}
}
