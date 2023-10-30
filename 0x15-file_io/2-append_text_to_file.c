#include "main.h"

/**
 * append_text_to_file - Function to append text at the end of a file.
 * @filename: Pointer to a string - the name of the file.
 * @text_content: Pointer to a string - the content to append to the file.
 *
 * Return: On success, the function should return 1.
 * On failure, the function should return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

