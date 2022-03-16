#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - natural numbers to 98
 * @n: input.
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
	printf("%d\n", n);
	}
	else if (n < 98)
	{
	for (i = n; i <= 98; i++)
	{
	if (i == 98)
	{
	printf("%d\n", 98);
	}
	else
	{
	printf("%d, ", i);
	}
	}
	}
	else if (n > 98)
	{
	for (i = n; i > 97; i--)
	{
	if (i == 98)
	{
	printf("%d\n", i);
	}
	else
	{
	printf("%d, ", i);
	}
	}
	}
}

