#include "holberton.h"

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
