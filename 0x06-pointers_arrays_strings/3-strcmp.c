#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 */
int _strcmp(char *s1, char *s2)
{
	int ret;
	
	ret = strcmp(s1, s2);
	if (ret < 0)
	{
	return (-15);
	}
	else if (ret > 0)
	{
	return (15);
	}
	else
	{
	return (0);
	}
}

