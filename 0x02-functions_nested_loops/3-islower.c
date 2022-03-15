#include "main.h"
/**
 * _islower - check for lowercase letters
 * @c: input.
 * Return: 1 if c is lowercase
 * else return 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
