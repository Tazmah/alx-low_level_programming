#include "main.h"
/**
 * _isdigit - function that check it it's a digit
 * @c: takes in a character/digit
 * Return: 1 if digit and 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
