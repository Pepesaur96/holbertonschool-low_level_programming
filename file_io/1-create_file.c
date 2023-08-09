#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to name of file
 * @text_content: string with content of the file
 * Return: 1 if success / -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
int i = 0, new_file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);

	write(new_file, text_content, i);

	return (1);
}
