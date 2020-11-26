#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: variable char
 * @s2: variable char
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
