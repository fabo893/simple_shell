#include "holberton.h"

int makeFork(char **tokens)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
		perror("./hsh");

	if (pid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
			perror("./hsh");

		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			wait(&status);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
