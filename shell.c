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
	while (1)
	{
		char *get_input, *new_input;
		size_t n;
		ssize_t no_chars_read;

		_print_prompt(); /* print prompt for the user */

		no_chars_read = getline(&get_input, &n, stdin); /* read input from the user*/
		if (no_chars_read == -1)
			return (-1);
	}
}
