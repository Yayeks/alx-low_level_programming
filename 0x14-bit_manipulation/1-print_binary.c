#include "main.h"
/**
 * print_binary - print the binary rep of number
 * @n: the number to be interpreted
 */
void print_binary(unsigned long int)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
