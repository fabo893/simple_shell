#include "holberton.h"

/**
 * launchPrompt - execute the functions to run the shell
 */
void launchPrompt(void)
{
	char *input;
	char *prompt = "$ ";
	char **tokens;
	int status;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, prompt, 2);

	while (status)
	{
		input = rdcmd();
		tokens = split(input);
		status = exeprg(tokens);

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, 2);


		free(input);
		free(tokens);
	}
}
