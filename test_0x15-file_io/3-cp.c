#include "main.h"
#define BUF_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @fd: file descriptor
 * Return: return 1 if successful
 */
void close_file(int fd);
int main(int argc, char **argv)
{
	int fd_to, fd_from;
	char buf[BUF_SIZE];
	ssize_t count_r, count_w;
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	count_r = read(fd_from, buf, BUF_SIZE);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (file_from == NULL || fd_from == -1 || count_r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		count_w = write(fd_to, buf, count_r);
		if (fd_to == -1 || count_w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		count_r = read(fd_from, buf, BUF_SIZE);
		fd_to = open(file_to, O_WRONLY | O_APPEND);
	} while (count_r > 0);

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
/**
 * close_file - function to close file
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
