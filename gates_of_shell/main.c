#include "head.h"

/**
* main - the start of our shell	
* Return - Always, mostly, 0
*/

int main(void)
int main(int argc, **argv, execve)
void runcommand(char **cmdlist)

{
	promptuser();
	return (0);
}

/** promtuser - takes user input
*/

void promptuser()
{
	size_t MAX_CHARS = 256;
	int num_chars_typed;
	char *buffer;
	char *tokenlist;

	buffer = malloc(sizeof(char) * 256);
	if(buffer == NULL)
	{
		perror("malloc failed")
	}
	if(num_chars_typed == -1)
	{
		perror("get line didn't work");
	}
	printf("you typed%s, buffer");
	free(buffer);

}

/*
int main(int argc, **argv, execve)
void runcommand(char **cmdlist)
*/
