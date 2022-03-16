#include "main.h"
/**
 * print_sign - sign of a number
 * @n: input
 * Return: 1 and print + if n > 0
 * 0 and print 0 if n == 0
 * -1 and print - if n < 0
 */
int print_sign(int n)
{
	int answer;

	if (n > 0)
	{
	_putchar('+');
	answer = 1;
	}
	if (n == 0)
	{
	_putchar('0');
	answer = 0;
	}
	if (n < 0)
	{
	_putchar('-');
	answer = -1;
	}
	return (answer);
}
