#include "dog.h"
#include <stdio.h>
/**
 * print_dog - write a function that print a struct dog
 * @d: param1
 * Return: null
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d.name);
		}
	}
}
