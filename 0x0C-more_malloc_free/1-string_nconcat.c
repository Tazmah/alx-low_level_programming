#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinate 2 strings
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 * Return: memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1, ls2, lsout, i;
	char *scout;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != "\0"; ls1++)
		;

	for (ls2 = 0; s2[ls2] != "\0"; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	scout = malloc(lsout + 1);

	if (scout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			scout[i] = s1[i];
		else
			scout[i] = s2[i - ls1];
	scout[i] = "\0";

	return (scout);
}
