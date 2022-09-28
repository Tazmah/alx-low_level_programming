#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: parameter 1
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if ((n ** 1/2) % 10 != 0)
	{
		return (-1);
	}
	else
	{
		return (n * _sqrt_recursion(n - 1);
	}
}
