#include <stdio.h>
/**
 * main - print sum of even-valued terms
 * Return: 0 always
 */
int main(void)
{
	long int, x = 1, y = 2, sum = 0, tSum = 0;

	for (i = 0; i <= 19; i++)
	{
	if ((y % 2 == 0) && (y <= 4000000))
	{
	tSum = tSum + y;
	}
	sum = x + y;
	x = y;
	y = sum;
	}
	printf("%ld\n", tSum);
	return (0);
}
