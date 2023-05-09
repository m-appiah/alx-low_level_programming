#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: file to be created
 * @text_content: content of the file
 *
 * Return: 1 for success or -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int read_write, filed, texts;

	if (!filename)
		return (-1);
	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filed == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (texts = 0; text_content[texts]; texts++)
		;
	read_write = write(filed, text_content, texts);
	if (read_write == -1)
		return (-1);
	close(filed);
	return (1);
}
