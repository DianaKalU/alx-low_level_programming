#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: Pointer to the name of the file to be read.
 * @letters: The number of letters the function should read and print.
 *
 *
 * Return: If the function fails, return 0. Otherwise, returns
 * the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

