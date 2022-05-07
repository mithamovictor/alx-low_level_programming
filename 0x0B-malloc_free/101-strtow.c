#include "main.h"
#include <stdio.h>

/**
 * **strtow - split string to words
 * @str: string passed
 * Return: words separated by spaces
 */

char **strtow(char *str)
{
	char *a;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	       ;

	a = malloc(i * sizeof(*str));
	if (a == NULL)
		return (NULL);

	a[i] = str[i];

	return (a);
}	
