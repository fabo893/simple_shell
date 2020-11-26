#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: variable char
 * @s2: variable char
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}


/**
 * handler - handles signals and write the prompt
 * @sig: signal to handle
 * Return: nothing
 */
void handler(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}

/**
 * end_of_file - function to handle ctrl+c interrupt signal
 * writes a new line, then frees the buffer from getline
 * @buffer: buffer array created by new line
 *
 * Return: void
 */
void end_of_file(char *buffer)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	free(buffer);
	exit(0);
}
