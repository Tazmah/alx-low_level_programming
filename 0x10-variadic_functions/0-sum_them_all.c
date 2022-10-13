#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - wite a function that returns sum of all param
 * @n: param 1
 * Return: sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, add  = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(args, unsigned int);
	}
	va_end(args);

	return (add);
}
