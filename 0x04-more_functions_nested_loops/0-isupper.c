#include "main.h"
#include <stdio.h>
/*
 * _isupper - check for c is upper
 *
 * @c: the character to be checked
 *
 * Description: description for _isupper case with param
 *
 * Return: 1 if its uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
