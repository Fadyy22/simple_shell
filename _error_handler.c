#include "shell.h"

/**
 * _error_handler - prints error messages like sh
 *
 * @name: my shell's name
 * @command: command written
 *
 * Return: 0
*/
int _error_handler(char *name, char *command)
{
	write(STDERR_FILENO, name, _stringlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "1", 1);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command, _stringlen(command));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "not found", 9);
	write(STDERR_FILENO, "\n", 1);
	return (0);
}
