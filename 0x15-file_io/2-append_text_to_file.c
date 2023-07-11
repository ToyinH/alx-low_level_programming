#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: string
 *
 * Return: return 1 if succesful.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lent;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		lent = strlen(text_content);
		count = write(fd, text_content, lent);
		if (count == -1 || count != lent)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
