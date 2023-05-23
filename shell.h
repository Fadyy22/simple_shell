#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

void _print_prompt(void);
int _execute_command(char *argv[], char *command[], int counter, char *env[]);
int _stringlen(char *input);
char *_stringdup(char *input);
char *_stringcpy(char *dest, const char *src);
int _error_handler(char *name, int counter, char *command);
int _count_commands(char *command);
char **_create_full_command(char *command);
char *_int_to_string(int number);
void _free_command_list(char *full_command[]);
char *_get_path(void);
int _stringncmp(const char *first, const char *second, size_t no_bytes);
char *_check_path(char *command);
char *_stringcat(char *dest, const char *src);
char *_get_input(void);
void _print_env(char **env);

#endif
