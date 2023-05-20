#include "shell.h"

/**
 * _stringdup - copies a string
 *
 * @input: string to be copied
 *
 * Return: copy of the string
*/
char *_stringdup(char *input)
{
	char *copy;
	int i;

	copy = malloc(sizeof(char) * _stringlen(input));
	if (copy == NULL)
	{
		perror("malloc");
		exit(1);
	}

	for (i = 0; input[i] != '\0'; i++)
		copy[i] = input[i];

	return (copy);
}
