#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standardoutput
 * @filename: The name of the file to be read
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t content, written;
	/* Checks if the filename is NULL */
	if (filename == NULL)
{
	return (0); }

	file = fopen(filename, "r"); /* open the file in read mode */

	if (file == NULL) /* Returns 0 if the file cant be opened */
{
	return (0); }
	/* allocate memory for the buffer to stoe file content */
	buffer = (char *)malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
{
	fclose(file); /*returns 0 if memory allocation fails */
	return (0); }
	content = fread(buffer, sizeof(char), letters, file);

	if (content <= 0)
{
	free(buffer);
	fclose(file);
	/* returns 0 if reading file fails */
	return (0); }
	/* write the buffer content to the standard output */
	written = fwrite(buffer, sizeof(char), content, stdout);

	if (written != content)
{
	free(buffer);
	fclose(file);
	return (0); }
	free(buffer);
	fclose(file);

	return (written); }
