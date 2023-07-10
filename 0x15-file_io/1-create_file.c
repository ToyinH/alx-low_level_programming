#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: string
 *
 * Return: return 1 if succesful and otherwise if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count1;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		count1 = write(fd, text_content, strlen(text_content));
		if (count1 == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
