#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to be converted
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (((n >> index) & 1) == 0)
		return (0);
	else
		return (1);
}
