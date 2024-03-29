#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;

	if (filename == NULL)
{
		return (-1);
}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
{
		return (-1);
}
	if (text_content != NULL)
{
	written = write(file, text_content, strlen(text_content));
	if (written == -1)
{
	close(file);
	return (-1);
}
}
	close(file);
	return (1);
}
