#include "shell.h"

/**
 * _remove_newline - removes new line from user input
 *
 * @input: string to remove new line from
 *
 * Return: new string without new line character
 */
char *_remove_newline(char *input)
{
	char *new_input;
	int input_len, i;

	input_len = _stringlen(input);

	new_input = malloc(sizeof(char) * (input_len - 1));
	if (new_input == NULL)
	{
		perror("malloc");
		exit(1);
	}
	for (i = 0; i < input_len - 1; i++)
		new_input[i] = input[i];

	return (new_input);
}
