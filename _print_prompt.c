#include "shell.h"

void _print_prompt(void)
{
	char *prompt = "$";
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, prompt, 2)
	}
}
void simple_shell(char *command)
{
	pid_t pid;
	pid = fork();
	if (pid < 0)
	{
		perror("Error");
	}
	else if (pid == 0)
	{
		char *argv[] = {command, NULL};
		execve(command, argv, NULL);
		perror("./shell")
			exit (1);
	}
	else
	{
		wait(NULL);
	}
}
