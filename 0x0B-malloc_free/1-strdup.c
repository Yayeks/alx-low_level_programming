#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strout[j] = str[j];
	return (strout);
}
