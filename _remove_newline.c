#include "shell.h"

/**
 * _remove_newline - removes new line from user input
 *
 * @input: string to remove new line from
 * @no_chars_read: number of chars read from user input including \0
 *
 * Return: new string without new line character
*/

char *_remove_newline(char *input, ssize_t no_chars_read)
{
	char *new_input;
	int i;

	new_input = malloc(sizeof(char) * (no_chars_read - 1);
	if (new_input == NULL)
	{
		perror("malloc");
		exit(1);
	}
	for (i = 0; i < no_chars_read - 1; i++)
		new_input[i] = input[i];

	return (new_input);
}
