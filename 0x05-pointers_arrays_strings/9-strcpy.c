#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy stringat the end of another string including \0.
 * @dest: pointer to string to be copied to.
 * @src: pointer to string to be copied.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	memset(dest, '\0');
	strcpy(dest, src);
	return(dest);
}
