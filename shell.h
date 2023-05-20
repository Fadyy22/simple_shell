#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void _print_prompt(void);
int _execute_command(char *argv[], char *command[], int counter);
char *_remove_newline(char *input);
int _stringlen(char *input);
char *_stringdup(char *input);
int _error_handler(char *name, int counter, char *command);
int _count_commands(char *command);
char **_create_full_command(char *command);
char *_int_to_string(int number);

#endif
