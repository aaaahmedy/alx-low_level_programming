#include "main.h"
/**
* close_fd - close the file descriptor.
* @fd: the descriptor.
* Return: Always 0.
*/

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}

/**
* main - copy from afile to another.
* @ac: arguments counts.
* @av: an array of strings.
* Return: ALWAYS 0.
*/

int main(int ac, char *av[])
{
	int fd_from, fd_to, rd_from, wr_to;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	rd_from = read(fd_from, buffer, 1024);
	if (rd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		exit(98);
	}
	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP |
	S_IWGRP	| S_IROTH);
	wr_to = write(fd_to, buffer, 1024);
	if (fd_to == -1 || wr_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buffer);
		exit(99);
	}
	free(buffer);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
