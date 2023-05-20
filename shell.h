#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void _print_prompt(void);
void _execute_command(char **command);
char *_remove_newline(char *input);
int _stringlen(char *input);
char *_stringdup(char *input);
int _error_handler(char *name, char *command);
int _count_commands(char *command);

#endif
