#include "main.h"

/**
 * create_file - will create a file.
 * @filename: point to the file to be created .
 * @text_content: points to the string of  the file.
 *
 * Return: -1  If the function fails .
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, len);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}

