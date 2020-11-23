#include "holberton.h"

/**
 * *_strremovechar - remove char into the string.
 * @str: string to be analized.
 * @ch: char to be removed.
 *
 * Return: string without char.
 */
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


/**
 * _strlen - get the length of the string.
 * @str: string to be analized.
 *
 * Return: length of the string.
 */
int _strlen(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}
