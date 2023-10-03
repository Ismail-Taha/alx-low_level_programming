#include "main.h"

/**
 * append_text_to_file -function that appends text at the end of a file.
 *
 * @filename:the name of the file to create
 * @text_content:the NULL terminated string
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, w_count = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[w_count] != '\0')
			w_count++;
		wr = write(file, text_content, w_count);
		if (wr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
