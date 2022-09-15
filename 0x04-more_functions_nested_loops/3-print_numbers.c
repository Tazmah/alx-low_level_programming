#include "main.h"
#include <stdio.h>

/*
 * print_numbers - print from 0 to 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i = 0;

	for (i >= 0 && <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
}
