#include "main.h"
/**
 * _isalpha - check for alphabets
 * @c: input.
 * Return: 1 if c is an alphabet
 * else return 0.
 */
int _isalpha(int c)
{
	if ((c >= "A" && c <= "Z") || (c >= "a" && c <= "z"))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
