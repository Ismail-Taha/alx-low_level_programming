#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: is the name of the file to create
 * @text_content : is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, coun_w, f_write;

	coun_w = 0;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[coun_w] != '\0')
			coun_w++;
		f_write = write(file, text_content, coun_w);

		if (f_write == -1)
			return (-1);
	}
	close(file);

	return (1);
}
