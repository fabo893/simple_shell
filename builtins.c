#include "holberton.h"

/**
 * _cd - change the directory.
 *
 * Return: On success, always 0.
 */

int _sexit(void);
int _cd(char **tokens);

/* Builtins array of strings */
char *str_builtins[1] = {"exit"};


int (*fun_builtins[1])(void) = {&_sexit};



/**
 * num_builtins - return an int.
 *
 * Return: An int.
 */

int num_builtins(void)
{
	return (sizeof(str_builtins) / sizeof(char *));
}


/**
 * _sexit - return 0 to exit the shell.
 *
 * Return: On success, always 0.
 */
int _sexit(void)
{
	return (0);
}
