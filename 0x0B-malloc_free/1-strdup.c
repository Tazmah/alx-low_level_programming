#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to a new space with the copy of the param
 * @str: param
 * @Return: value if char is not null
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(str));

	for (i = 0; i < sizeof(str); i++)
		s[i] = str;

	free(s);
	return (s);
}
