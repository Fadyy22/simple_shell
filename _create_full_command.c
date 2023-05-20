#include "shell.h"

char **_create_full_command(char *command)
{
	int no_command, i;
	const char *delim = " \t\n";
	char *command_copy, *single_command;
	char **full_command;

	no_command = _count_command(command);
	command_copy = _stringdup(command);

	full_command = malloc(sizeof(char *) * no_command);
	single_command = strtok(command_copy, delim);
	for (i = 0; single_command != NULL; i++)
	{
		full_command[i] = malloc(sizeof(char) * _stringlen(single_command));
		full_command[i] = _stringdup(single_command);
		single_command = strtok(NULL, delim);
	}
	full_command_commad[i] = NULL;

	free(command_copy);
	free(single_command);
	return (full_command);
}
