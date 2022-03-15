#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - last digit of number
 * @n: input.
 * Return: last digit of a number
 */
int print_last_digit(int)
{
	int lastDigit;

	lastDigit = abs(n % 10);
	_putchar('0' + lastDigit);
	return (lastDigit);
}
