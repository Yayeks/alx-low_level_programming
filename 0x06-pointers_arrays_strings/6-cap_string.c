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
	i = 0;
	while (m[i] != '\0')
	{
	if (m[0] >= 97 && m[0] <= 122)
	{
	m[0] = m[0] - 32;
	}
	if (m[i] == ' ' || m[i] == '\t' || m[i] == '\n' || m[i] == ','
			|| m[i] == ';' || m[i] == '.' || m[i] == '!'
			|| m[i] == '?' || m[i] == '"' || m[i] == '('
			|| m[i] == ')' || m[i] == '{' || m[i] == '}')
	{
	if (m[i + 1] >= 97 && m[i + 1] <= 122)
	{
	m[i + 1] = m[i + 1] - 32;
	}
	}
	i++;
	}
	return (m);
}
