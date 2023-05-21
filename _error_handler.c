#include "shell.h"

/**
 * _error_handler - prints error messages like sh
 *
 * @name: my shell's name
 * @command: command written
 * @counter: command counter
 *
 * Return: 0
 */
int _error_handler(char *name, int counter, char *command)
{
	char *string_counter;

	string_counter = _int_to_string(counter);
	write(STDERR_FILENO, name, _stringlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, string_counter, _stringlen(string_counter));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command, _stringlen(command) + 1);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "not found", 9);
	write(STDERR_FILENO, "\n", 1);

	free(string_counter);
	return (0);
}
