#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

void launchPrompt(void);
char *rdcmd(void);
char **split(char *input);
int exeprg(char **tokens);
int _strcmp(char *s1, char *s2);
int _sexit(void);
char *str_builtins[1];
int (*fun_builtins[1]) (void);
int num_builtins(void);
int makeFork(char **tokens);

#endif /* HOLBERTON_H */
