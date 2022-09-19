#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int index;

	/*find the length of the string without null character*/
	for (index = 0; s[index] != '\0'; ++index);

	/*print char from the last index*/
	for (--index; index >= 0; --index)
		putchar(s[index]);
	putchar('\n');
}
