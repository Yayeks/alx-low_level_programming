#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - checks if square of x is n
 * @n: number
 * @x: value to check
 * Return: int
 */
int square(int n, int x)
{
	if (x * x == n)
	{
	return (x);
	}
	else if (x * x > n)
	{
	return (-1);
	}
	else
	{
	return (square(n, x + 1));
	}
}
