#include "main.h"
/**
 * _isupper - check of uppercase or not
 * @c: first param
 * Return: 0
 */
int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
