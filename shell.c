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

	counter = 1;
	while (1)
	{
		char *get_input;
		char **full_command;

		_print_prompt();

		get_input = _get_input();
		if (get_input[0] == '\n' || get_input == NULL)
		{
			free(get_input);
			continue;
		}

		full_command = _create_full_command(get_input);
		if (full_command == NULL)
			continue;
		if (_stringncmp(full_command[0], "env", 3) == 0)
		{
			_print_env(env);
			continue;
		}
		_execute_command(argv, full_command, counter, env);
		counter++;
		free(get_input);
	}
	return (0);
}
