#include "holberton.h"

int exeprg(char **tokens)
{
	int idx;
	int num;

	if(tokens[0] == NULL)
		return (1);

	for (idx = 0; idx < num_builtins(); idx++)
	{
		if (strcmp(tokens[0], str_builtins[idx]) == 0)
		{
			return (*fun_builtins[idx])(tokens);
		}
	}

	return (makeFork(tokens));
}
