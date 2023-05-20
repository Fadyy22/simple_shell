#include "shell.h"

/**
 * main - main shell to execute commands
 *
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * @env: environment variables
 *
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char **argv, char **env)
{
	int counter;

	counter = 0;

	while (1)
	{
		char *get_input = NULL, *new_input;
		char *single_command;
		char **full_command;
		int no_command, i;
		size_t n = 0;
		ssize_t no_chars_read;

		_print_prompt(); /* print prompt for the user */

		no_chars_read = getline(&get_input, &n, stdin); /* read input from the user*/
		if (no_chars_read == -1)
			return (-1);

		new_input = _remove_newline(get_input);
		no_command = _count_commands(new_input);
		full_command = malloc(sizeof(char *) * no_command);
		single_command = strtok(new_input, " ");
		for (i = 0; single_command != NULL; i++)
		{
			full_command[i] = malloc(sizeof(char) * _stringlen(single_command));
			full_command[i] = single_command;
			single_command = strtok(NULL, " ");
		}
	}
}
