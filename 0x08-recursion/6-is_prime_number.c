#include "main.h"
/**
 * is_prime_number - returns prime number
 * @n: number to check
 * Return: int
 */
/**
 * div - check for prime
 * @n: number
 * @x: value
 * Return: int
 */
int div(int n, int x)
{
	if (n <= 1)
	{
	return (0);
	}
	if (x != n)
	{
	if (n % x != 0)
	{
	return (div(n, x+1));
	}
	else
	{
	return (0);
	}
	}
	else
	{
	return (1);
	}
}
int is_prime_number(int n)
{
	return (div(n, 2));
}
