#include "holberton.h"

int _sexit(char **tokens);
int _cd(char **tokens);

char *str_builtins[] = {"exit"};

int (*fun_builtins[]) (char **) = {&_sexit};

int num_builtins()
{
	return (sizeof(str_builtins) / sizeof(char *));
}


int _sexit(char **tokens)
{
	return (0);
}

/*
int _cd(char **tokens)
{
	if (tokens[1] == NULL)
	{
		;
	}
	else
	{
		if (chdir(tokens[1]) != 0)
			perror("./hsh");
	}
	return (1);
}
*/
