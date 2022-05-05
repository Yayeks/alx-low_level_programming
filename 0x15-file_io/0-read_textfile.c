#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed. It fails, returns 0
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
