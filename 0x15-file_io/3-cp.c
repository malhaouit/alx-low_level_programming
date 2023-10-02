#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints the error and exit the code
 * @error_code: The error code tot exit the program
 * @message: The error message to print
 * @filename: The name of the file
 *
 * Return: Nothing
 */
void print_error_and_exit(int error_code, const char *message, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename, fd);
	exit(error_code);
}

/**
 * main -  Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program
 * @argv: The array containing argumets
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n", argv[0], -1);

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from %s\n", file_from, -1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", file_to, -1);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", file_to, -1);
		}
	}

	if (bytes_read == -1)
	{

		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from %s\n", file_from, -1);
	}

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_from, fd_from);

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_to, fd_to);

	return (0);
}
