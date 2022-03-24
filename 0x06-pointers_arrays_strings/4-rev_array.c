#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	for (; i > 0; i--)
	{
	putchar(a[i]);
	putchar(',');
	putchar(' ');
	}
	if (i == 0)
	{
	putchar(a[0]);
	}
}
