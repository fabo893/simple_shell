#include "holberton.h"

/**
 * *rdcmd - get the user input.
 *
 * Return: On success, return de user input.
 */
char *rdcmd(void)
{

	char *user_input;
	size_t bufsize = 256;
	ssize_t chr;

	user_input = malloc(sizeof(char) * bufsize);
	if (user_input == NULL)
	{
		free(user_input);
		return (0);
	}
	chr = getline(&user_input, &bufsize, stdin);

	if (chr == -1)
	{
		if (chr == EOF)
			end_of_file(user_input);
		else
		{
			perror("rdcmd");
			return (0);
		}
	}
	return (user_input);
}
