#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
	temp = a[i];
	a[i++] = a[n];
	a[n--] = temp;
	}
}
