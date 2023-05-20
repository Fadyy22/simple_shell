#include "shell.h"

/**
 * _stringlen - calc input length excluding \0
 *
 * @input: string
 *
 * Return: length of the string
 */
int _stringlen(char *input)
{

	int stringlen;

	for (stringlen = 0; input[stringlen] != '\0'; stringlen++)
		;

	return (stringlen);
}
