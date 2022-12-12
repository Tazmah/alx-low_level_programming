#include "main.h"
/**
 * more_numbers -prints 10 times the number, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar (c + '0');
		}
		_putchar('\n');
	}
}
