#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * closeErr - print error message when can't close file
 * @fd: file descriptor
 */
void closeErr(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * writeErr - print error message when can't write to file
 * @file_to: name of the file
 */
void writeErr(char *file_to)
{
	dprintf(2, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * readErr - print error message when can't read from file
 * @file_from: name of the file
 */
void readErr(char *file_from)
{
	dprintf(2, "Error: Can't read from %s\n", file_from);
	exit(98);
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Usage: cp file_from file_to
 * if the number of argument is not the correct one, exit with code
 * 97 and print Usage: cp file_from file_to, followed by a new line,
 * on the POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with
 * code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit with code 99
 * and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descripto
 * exit with code 100 and print
 * Error: Can't close fd FD_VALUE, followed by a new line,
 * on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 * Permissions of the created file: rw-rw-r--. If the file already exists,
 * do not change the permissions
 * You must read 1,024 bytes at a time from the file_from to make less
 * system calls. Use a buffer
 * You are allowed to use dprintf
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	char *file_from;
	char *file_to;
	int fd_from, fd_to, read_bytes, write_bytes;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		writeErr(file_to);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		readErr(file_from);
	do {
		read_bytes = read(fd_from, buffer, 1024);
		if (read_bytes == -1)
			readErr(file_from);
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1)
			writeErr(file_to);
	} while (read_bytes == 1024);
	if (close(fd_from) == -1)
		closeErr(fd_from);
	if (close(fd_to) == -1)
		closeErr(fd_to);
	return (0);
}
