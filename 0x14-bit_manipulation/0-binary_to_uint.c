#include "main.h"
/**
 * int binary_to_uint - converts binary to unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number or 0 if not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned num;

	for (num = 0; *b; b++)
	{
		if (*b == '1')
			num = ((num << 1) | 1);
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
			break;
	}
	return (num);
}
