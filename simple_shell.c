#include "holberton.h"

char *_strremovechar(char *str, char ch);
int _strlen(char *str);

int main(void)
{
	char prompt[] = "#musicianshell$ ";
	char *lineptr;
	size_t buffersize = 256;
	pid_t child_pid;
	struct stat st;
	int status;
	char *clean_input;
	char *argv[256] = {NULL};
	/* size_t input; */


        /* Separando memoria para la entrada del comando */
	lineptr = malloc(sizeof(char) * buffersize);
	if (lineptr == NULL)
	{
		free(lineptr);
		EOF;
		return (-1);
	}

	while (1)
	{
                /* Muestra el prompt */
		printf("%s", prompt);

                /* Entramos un comando y lo guarda en la variable lineptr */
		getline(&lineptr, &buffersize, stdin);

                /* Le quitamos el new-line a lineptr */
		clean_input = _strremovechar(lineptr, '\n');

                /* Declarando el argument vector */
		argv[0] = clean_input;

                /* Creando el hijo que ejecutara el comando que escribimos */
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error");
			return (1);
		}
		if (child_pid == 0)
		{
                        /* Verificando el status del comando (si es valido) */
			if (stat(clean_input, &st) == 0)
			{
				execve(argv[0], argv, NULL);
			}
			else
			{
				perror("./hsh");
			}
		}

                /* Esperando a que el hijo termine para volver al loop */
		wait(&status);
	}

	return (0);
}


int _strlen(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}


char *_strremovechar(char *str, char ch)
{
	int strl = _strlen(str);
	int charcount = 0;
	int idx;
	int jdx;
	char *newstr;

	while (str[idx++] != '\0')
	{
		charcount++;
	}
	newstr = malloc(strl - charcount);

	for (idx = 0, jdx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] != ch)
		{
			newstr[jdx] = str[idx];
			jdx++;
		}
	}

	return (newstr);
}
