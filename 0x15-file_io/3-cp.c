#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exit97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void exit97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * exit98 - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void exit98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * exit99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void exit99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * exit100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void exit100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fl_from, fl_to, close_from, close_to;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	exit97(argc);
	fl_from = open(argv[1], O_RDONLY);
	exit98((ssize_t)fl_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	exit99((ssize_t)fl_to, argv[2], fl_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fl_from, buffer, 1024);
		exit98(lenr, argv[1], fl_from, fl_to);
		lenw = write(fl_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		exit99(lenw, argv[2], fl_from, fl_to);
	}
	close_to = close(fl_to);
	close_from = close(fl_from);
	exit100(close_to, fl_to);
	exit100(close_from, fl_from);
	return (0);
}

