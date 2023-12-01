#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: the file name.
* @text_content: the content to append to the file.
* Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int wr, fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content - len, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
