#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int man = n ^ m, bits = 0;

	while (man > 0)
	{
		bits += (man & 1);
		man >>= 1;
	}
	return (bits);
}
