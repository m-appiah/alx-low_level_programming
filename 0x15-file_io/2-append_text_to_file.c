#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: file to be appended
 * @text_content: content of the file to be appended
 *
 * Return: 1 if file exist or -1 if doesn't
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, texts, read_write;

	if (!filename)
		return (-1);
	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);
	if (text_content)
	{
		for (texts = 0; text_content[texts]; texts++)
			;
		read_write = write(filed, text_content, texts);
		if (read_write == -1)
			return (-1);
	}
	close(filed);
	return (1);
}
