#include "main.h"
#include <stdio.h>
/**
 * _strlen - write a function that returns the length of a string
 *
 * @s: parameter
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	char len;

	len = _strlen(*s);
	ptintf("%d\n", len);
	return (0);
}
