#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads text file and prints
 * @filename: A pointer to the name of file
 * @letters: the letters
 * Return: 0 if file cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *stash;

	if (filename == NULL)
		return (0);
	stash = malloc(sizeof(char) * letters);

	if (stash == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, stash, letters);
	w = write(STDOUT_FILENO, stash, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(stash);
		return (0);
	}

	free(stash);
	close(o);

	return (w);
}
