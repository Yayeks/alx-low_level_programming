#include <stdio.h>
/**
 * main - print first 98 numbers
 * Return: 0 always
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0;

	for (i = 1; i < 91; i++)
	{
	printf("%lu, ", x);
	sum = x + y;
	x = y;
	y = sum;
	if (i == 93)
	{
	printf("%lu\n", x);
	}
	}
	return (0);
}
