#include "main.h"
/**
 * main - check the code
 *
 * Return: void.
 */
void print_alphabet(void)
{
	/*char alphabet[26] = "abcdefghijklmnopqrstuvwxyz"*/
	char i;

	for (i = "a"; i <= "z"; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
