#include "shell.h"

/**
 * _execute_command - executes a command provided by the user
 *
 * @command: array of string as command and its arguments
 *
 * Return: void
*/

void _execute_command(char *command[])
{
	pid_t child;

	child = fork();

	if (child < 0)
	{
		perror("fork");
		exit(1);
	}
	else if (child == 0)
	{
		execve(command[0], command, NULL);
		perror("./hsh");
		exit(1);
	}
	else
	{
		wait(NULL);
	}
}
