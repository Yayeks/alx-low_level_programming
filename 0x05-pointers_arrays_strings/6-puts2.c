#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints very other character in string.
 * @str: pointer to string.
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i+=2)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
