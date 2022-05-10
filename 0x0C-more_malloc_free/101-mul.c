#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns multiple of two numbers
 * @num1: first integer
 * @num2: second integer
 * Return: result or 98 if invalid
 */

int *multiples(int *num1, int *num2)
{
	int *s;
	
	if(*num1 == NULL)
		return (98);

	if(*num2 == NULL)
		return (98);

	*s = malloc(sizeof(*num1) * sizeof(*num2));

	s = *num1 * *num2;
	return (s);
}
