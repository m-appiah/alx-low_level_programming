#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text fle and print it to the POSIX standard output
 * @filename: pointer to name of the file to read
 * @letters: the number of letters to read
 *
 * Return: letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t text_read, text_write;
	char *buffer;

	if (!filename)
		return (0);

	filed = open(filename, O_RDONLY);

	if (filed == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	text_read = read(filed, buffer, letters);
	text_write = write(STDOUT_FILENO, buffer, text_read);

	close(filed);
	free(buffer);
	return (text_write);
}
