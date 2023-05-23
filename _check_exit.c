#include "shell.h"

/**
 * _check_exit - exits the shell if only exit provided,
 * exits with a status if provided
 *
 * @full_command: array of commands strings
 *
 * Return: -1 if Invalid number
*/

int _check_exit(char **full_command)
{
	if (_stringncmp(full_command[0], "exit", 4) == 0 && !full_command[1])
	{
		exit(0);
	}

	if (_stringncmp(full_command[0], "exit", 4) == 0
		&& _string_to_int(full_command[1]) != -1)
	{
		exit(_string_to_int(full_command[1]));
	}
	else if (_stringncmp(full_command[0], "exit", 4) != 0)
		return (1);
	else
		return (-1);
}
