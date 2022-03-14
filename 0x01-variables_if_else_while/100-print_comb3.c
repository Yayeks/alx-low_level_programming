#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i; j <= 9; j++)
	{
	if (i == j)
	{
	continue;
	}
	putchar(i % 10 + '0');
	putchar(j % 10 + '0');
	if (i == 8)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

