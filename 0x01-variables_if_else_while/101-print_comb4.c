#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
	for (j = i; j <= 9; j++)
	{
	for (k = j; k <= 9; k++)
	{
	if (i == j || j == k || i ==k)
	{
	continue;
	}
	putchar(i % 10 + '0');
	putchar(j % 10 + '0');
	putchar(k % 10 + '0');
	if (i == 7)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
