#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - split string to words
 * @str: string passed
 * Return: words separated by spaces
 */

char **strtow(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	       ;

	a = malloc(i * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (j=0; j < i; j++)
		a[j] = str[j];
	a[j] = '\0';

	return (a);
}	
