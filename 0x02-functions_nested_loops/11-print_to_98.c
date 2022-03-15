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
	printf("%d\n", n);
	if (i == 98)
	{
	continue;
	}
	printf(", ");
	}
	}
	else
	{
	for (i = n; i >= 98; i++)
	{
	printf("%d\n", n);
	if (i == 98)
	{
	continue;
	}
	printf(", ");
	}
	}
}

