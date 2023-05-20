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
	(void)argc;
	(void)env;

	counter = 1;

	while (1)
	{
		char *get_input = NULL, *new_input;
		char **full_command;
		size_t n = 0;
		ssize_t no_chars_read;

		_print_prompt();

		no_chars_read = getline(&get_input, &n, stdin);
		if (no_chars_read == EOF)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 2);
			exit(0);
		}

		new_input = _remove_newline(get_input);
		full_command = _create_full_command(new_input);
		_execute_command(argv, full_command, counter);
		counter++;

	}
	if (isatty(STDIN_FILENO) == 0)
	{
		return (0);
	}
	return (0);
}
