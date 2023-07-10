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
	ssize_t count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		count = write(fd, text_content, (strlen(text_content)));
		if (count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
