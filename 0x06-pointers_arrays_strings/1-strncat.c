#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
