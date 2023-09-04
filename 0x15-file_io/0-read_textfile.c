#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print it to standard output
 * @filename: Text File to be read
 * @letters: nbrs of letters that will be read 
 * Return: w- nmbers  of bytes read and printed
 *        0 if  function fail or filename is null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (w);
}

