#include "main.h"
#define BUF_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: return 1 if successful
 */

int main(int argc, char **argv)
{
	int fd_to, fd_from;
	char buf[BUF_SIZE];
	ssize_t count, count1;
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (file_from == NULL)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	count = read(fd_from, buf, BUF_SIZE);
	if (count == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
		close(fd_from);
		close(fd_to);
	}

	count1 = write(fd_to, buf, count);
	if (count1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]);
		exit(99);
		close(fd_from);
		close(fd_to);
	}
	close(fd_from);
	close(fd_to);
	return (1);
}

