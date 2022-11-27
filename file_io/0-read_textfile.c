#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: chars to be printed.
 * Return: numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t a, b;
	char *bf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * (letters));
	if (!bf)
		return (0);
	a = read(fd, bf, letters);
	b = write(STDOUT_FILENO, bf, a);
	close(fd);
	return (b);
}
