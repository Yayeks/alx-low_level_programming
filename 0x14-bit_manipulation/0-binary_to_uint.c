#include "main.h"
/**
 * int binary_to_uint - converts binary to unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number or 0 if not binary
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, unsigned int no = 0;

	if (b[len] == '\0')
		return (0);
	while ((b[len] == '0' || b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}
	return (num);
}
