#include "shell.h"

/**
 * _execute_command - executes a command provided by the user
 *
 * @argv: main program arguments
 * @command: array of string as command and its arguments
 * @counter: command counter
 *
 * Return: 0 on success, otherwise 1
 */
int _execute_command(char *argv[], char *command[], int counter)
{
	pid_t child;
	int status;

	if (argv == NULL)
		return (1);

	child = fork();

	if (child < 0)
	{
		perror("fork");
		exit(1);
	}
	else if (child == 0)
	{
		if (execve(command[0], command, NULL) == -1)
		{
			_error_handler(argv[0], counter, command[0]);
			free(command);
			exit(1);
		}
		exit(0);
	}
	else
	{
		waitpid(child, &status, 0);
	}
	return (0);
}
