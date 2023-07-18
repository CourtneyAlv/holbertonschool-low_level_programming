#include "main.h"

#define BUF_SIZE
/**
 *
 *
 *
*/
void print_error (const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}
/**
 *
 *
 *
*/
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from;
	char buffer[BUF_SIZE];
	ssize_t content, written;

	if (argc != 3)
{
	print_error("Usage: cp file_from file_to");
	exit (97);
}
	file_from = argv[1];
	file_to = argv[2];
	
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
{
	print_error("Error: Can't write to file");
	dprintf(STDERR_FILENO, "%s\n", file_to);
	close(fd_from);
	exit(99);
}
	while ((content = read(fd_from, buffer, BUF_SIZE)) > 0);		written = write(fd_to, buffer, content);
			if (written == -1)
{
				print_error("Error: Can't Write to file");
				dprintf(STDERR_FILENO, "%s\n". fule_to);
				close(fd_from);
				close(fd_to);
				exit(99);
}
}
			if (content == -1)
{
				print_error("Error: Can't read from file");
				dprintf(STDERR_FILENO, "%s\n", file_from);
				close(fd_from);
				close(fd_to);
				exit(98);
}
			if (close(fd_from) == -1)
{
				print_error("Error: Can't close fd");
				dprintf(STDERR_FILENO, "%d\n", fd_from);
				exit(100);
}
			if (close(fd_to) == -1) 
{
				print_error("Error: Can't close fd");
				dprintf(STDERR_FILENO, "%d\n", fd_to);
				exit(100);
}
		return (0);
}
