#include "holberton.h"

void makeFork(char *str)
{
	pid_t child_pid;
	char *argv[2] = {NULL};
	struct stat st;

	argv[0] = str;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error");
	}
	if (child_pid == 0)
	{
		/* Verificando el status del comando (si es valido) */
		if (stat(str, &st) == 0)
		{
			execve(argv[0], argv, NULL);
	       	}
		else
		{
			perror("./hsh");
		}
	}
}
