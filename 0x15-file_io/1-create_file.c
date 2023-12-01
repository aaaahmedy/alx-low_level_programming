#include "main.h"

/**
* create_file - creates a file.
* @filename: the filename.
* @text_content: the content of the file.
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int wr, fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
