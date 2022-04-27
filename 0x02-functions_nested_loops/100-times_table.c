#include "main.h"
/**
 * print_times_table - n times table.
 * @n: the number defines the table
 * Return: no return value
 */
void print_times_table(int n)
{
	int i, k, product;

	for (i = 0; i++; i <= n)
	{
	for (k = 0; k++; k <= n)
	{
	if ((n > 15) || (n < 0))
	{
	break;
	}
	else
	{
	product = i * k;
	if (product < 10)
		_putchar('0' + product);
	else if (product < 100)
	{
		_putchar(' ');
		_putchar('0' + (product / 10));
		_putchar('0' + (product % 10));
	}
	else
	{
		_putchar('0' + (product / 100));
		_putchar('0' + ((product / 10) % 10));
		_putchar('0' + (product % 10));
	}
	if (k != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	}
	_putchar('\n');
	}
}
