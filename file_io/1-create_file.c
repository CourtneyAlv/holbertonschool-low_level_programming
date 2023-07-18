#include "main.h"
/**
 * create_file - Creates a file with the specified name and writes the text
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
{
		return (-1);
}	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
{
		return (-1);
}
	if (text_content != NULL)
{
	ssize_t written = write(file, text_content, strlen(text_content));

	if (written == -1)
{
	close(file);
		return (-1);
}
}
	close(file);
		return (1);
}
