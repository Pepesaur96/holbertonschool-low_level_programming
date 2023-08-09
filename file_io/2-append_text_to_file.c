#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - adds text to the end of a file
 * @filename: pointer to name of file
 * @text_content: string with content to add at end of the file
 * Return: 1 if success / -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
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

new_file = open(filename, O_WRONLY | O_APPEND);

	if (new_file == -1)
		return (-1);

	write(new_file, text_content, i);

	return (1);
}
