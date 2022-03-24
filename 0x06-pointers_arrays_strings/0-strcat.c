#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two string
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * Return: pointer to destination string.
 */
char *_strccat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
