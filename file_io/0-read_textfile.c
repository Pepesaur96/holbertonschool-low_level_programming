#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and displays it to stdOUT
 * @filename: pointer to txt file
 * @letters: # of letter it should read & print
 * Return: #of characters printed or "0" if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t open_file, read_file, write_file;
char *text;

text = malloc(letters);

	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

open_file = open(filename, O_RDONLY);

	if (open_file == -1)
	{
		free(text);
		return (0);
	}

read_file = read(open_file, text, letters);

write_file = write(STDOUT_FILENO, text, read_file);

close(open_file);

return (write_file);
}
