#include "holberton.h"

char *rdcmd(void)
{

	char *user_input;
	size_t bufsize = 256;

	user_input = malloc(sizeof(char) * bufsize);
	if (user_input == NULL)
	{
		free (user_input);
		return (0);
	}

	if (getline(&user_input, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);

		else
		{
			perror("rdcmd");
			return (0);
		}
	}
	return (user_input);
}
