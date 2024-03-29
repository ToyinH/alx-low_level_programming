#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: the number of characters to read and print
 *
 * Return: the number of char read or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t char_count, char_count1;
	char *buf1;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf1 = (char *)malloc(sizeof(char) * letters);
	if (buf1 == NULL)
	{
		close(fd);
		return (0);
	}

	char_count = read(fd, buf1, letters);
	if (char_count == -1)
	{
		free(buf1);
		close(fd);
		return (0);
	}

	char_count1 = write(STDOUT_FILENO, buf1, char_count);
	free(buf1);
	close(fd);
	return (char_count1);
}
