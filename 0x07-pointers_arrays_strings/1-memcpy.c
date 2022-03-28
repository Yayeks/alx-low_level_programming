#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest - to memory area
 * @src - from memory area
 * @n: length of src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
