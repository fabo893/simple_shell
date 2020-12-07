#include "holberton.h"

/**
 * launchPrompt - execute the functions to run the shell
 */
void launchPrompt(void)
{
	char *input;
	char **tokens;
	int status;

	do {
		printf("$ ");
		input = rdcmd();
		tokens = split(input);
		status = exeprg(tokens);

		free(input);
		free(tokens);
	} while (status);
}
