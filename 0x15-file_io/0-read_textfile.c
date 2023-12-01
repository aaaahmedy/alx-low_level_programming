#include "main.h"
#include <stdio.h>

/*
 *read_textfile : reads a text file and prints it to the STDOUT.
 *@filename:The file containing the text
 *@letters:Number of text characters
 *RETURN : 0 (SUCCESS)
 *
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rd, wr;
	int fd;


	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer)
		return (0);
	}

	close(fd);

	free(buffer);
	buffer = NULL;
	return (wr);
}
