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
char *_strremovechar(char *str, char ch);
int _strlen(char *str);
int makeFork(char **tokens);
int num_builtins(void);
int _strcmp(char *s1, char *s2);
char *str_builtins[1];
int (*fun_builtins[1])(void);
int _sexit(void);
int exeprg(char **tokens);
char *rdcmd(void);
char **split(char *input);
void end_of_file(char *buffer);





#endif /* HOLBERTON_H */
