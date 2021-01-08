#include "holberton.h"

/**
 * exeprg - compare the input with the builtins.
 * @tokens: pointer to pointer of tokens
 *
 * Return: On succes, integer from makeFork.
 */
int exeprg(char **tokens)
{
	int idx;

	if (tokens[0] == NULL)
		return (1);

	for (idx = 0; idx < num_builtins(); idx++)
	{
		if (_strcmp(tokens[0], str_builtins[idx]) == 0)
		{
			return(fun_builtins[idx]());
		}
	}

	return (makeFork(tokens));
}
