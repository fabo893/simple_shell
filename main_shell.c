#include "holberton.h"

/**
 * main - call the function that start the shell.
 *
 * Return: On success, always O.
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	(void)env;

	launchPrompt();

	return (0);
}
