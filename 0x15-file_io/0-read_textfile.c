#include <stdio.h>
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
	ssize_t read_text;
	FILE *file_pointer;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_pointer = fopen(filename, "r");
	if (file_pointer == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file_pointer);
		return (0);
	}
	read_text = fread(buffer, sizeof(char), letters, file_pointer);
	if (read_text == 0)
	{
		fclose(file_pointer);
		free(buffer);
		return (0);
	}
	if (fwrite(buffer, sizeof(char), read_text, stdout) != (size_t) read_text)
	{
		fclose(file_pointer);
		free(buffer);
		return (0);
	}
	fclose(file_pointer);
	free(buffer);
	return (read_text);
}
