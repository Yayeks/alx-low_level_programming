#include "main.h"
/**
 * print_alphabet_x10 - abcd
 * prints all aphabets in 10 lines
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i < 26; i++)
	{
	_putchar(alphabet[i]);
	}
	_putchar('\n');
	}
}
