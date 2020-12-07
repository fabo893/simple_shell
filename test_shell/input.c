#include "header.h"

char **evaluate_input()
{
	char **tokens = NULL;
	char *line = NULL;
	char *line_cp = NULL;
	char *token = NULL;
	unsigned int count = 0;
	size_t n = 0;
	ssize_t read;

	read = getline(&line, &n, stdin);
	if (read == 1)
	{
		printf("getline failed : (\n");
		free(line);
		exit(EXIT_FAILURE);
	}
	token = strtok(line_cp, DELIMS);
	while (token)
	token[tokens[index] = token;
	index++;
	
	free(line_cp);
	printf("user input was [%ul]: %s\n", read, line);
	return tokens;
