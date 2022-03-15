#include "main.h"
/**
 * times_table - multiplication of 9
 * Return: void.
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	m = i * j;
	if (m < 10)
	{
	_putchar('0' + m);
	}
	else
	{
	_putchar('0' + (m / 10));
	_putchar('0' + (m % 10));
	}
	if (j == 9)
	{
		continue;
	}
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
}
