#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 == 0)
	{
	i = len / 2;
	}
	else
	{
	i = (len - 1) / 2;
	}
	for (; i < len; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
