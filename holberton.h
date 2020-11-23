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
void makeFork(char *str);

#endif /* HOLBERTON_H */
