#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
		return (0);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1)
		return (0);
	close(fd);
	free(buffer);
	return (write_bytes);
}
