#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, '', (, ), {, and }.
 * @m: pointer to string.
 * Return: pointer to m.
 */
char *cap_string(char *m)
{
	int i;

	/* capitalize first character of words */
	for (i = 0; m[i] != '\0'; i++)
	{
	if (i == 0)
	{
	if ((m[i] >= 'a' && m[i] <= 'z'))
	{
	m[i] = m[i] - 32;
	continue;
	}
	}
	if (m[i] == ' ' || m[i] == '\t' || m[i] == '\n' || m[i] == ','
			|| m[i] == ';' || m[i] == '.' || m[i] == '!'
			|| m[i] == '?' || m[i] == '"' || m[i] == '('
			|| m[i] == ')' || m[i] == '{' || m[i] == '}')
	{
	++i;
	if (m[i] >= 'a' && m[i] <= 'z')
	{
	m[i] = m[i] - 32;
	continue;
	}
	}
	else
	{
	if (m[i] >= 'A' && m[i] <= 'Z')
	m[i] = m[i] + 32;
	}
	}
	return (m);
}
