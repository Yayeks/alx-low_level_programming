#include "main.h"
/**
 * cfreate_file - creates a file
 * @filename - pointer to the filename
 * @text_content - NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	len = 0;
	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		for (len, text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
