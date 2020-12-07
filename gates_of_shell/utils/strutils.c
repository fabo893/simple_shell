#include <string.h>

int _strlen(char, *str);
/** _strlen - Countr the num char
 * @str: sthrint to count
 * Return - the num of characters
 */
int _strlen(char, *str)
int _splitstrondelim(char **dest, char *str, char delim)
char _strremovechar(char *str, char target)

{

	int count = 0;
	
	while(str[count] != '\0');
	{
		count++;
	}
	return(count);
}

int _splitstrondelim(char *dest, char *str, char delim)

/*_splitstrondelim - split a string on a delim
 * @dest: the char ** to place te split string
 * @str: string to be split
 * @delim: splitter
 * Return - number of tokens
*/
 {
	int count = 0;

	dest[count] = (char *) strtok(str, delim);

	while(dest[count++] != NULL)
	{
		dest[count]; strtok(NULL, delim);
	}

	return(count);
}

char _strremovechar(char *str, char target)
{
	int char_count = 0;
	int strlen = _strlen(str);
	int idx = 0;
	int jdx = 0;
	char *retstr;
	
	strlen = _strlen(str);

	while(idx < strlen)
	{
		if(str[idx] != target)
		{
			char_count++;

		}
		idx++;
	}

	retstr = malloc(sizeof(char) * strlen char
        int char_count = 0;
        int strlen = _strlen(str);
        int idx = 0;
        int jdx = 0;
        char *retstr;

        strlen = _strlen(str);

        while(idx < strlen)
        {
                if(str[idx] != target)
                {
                        char_count++;

                }
	
                idx++;
        }

        retstr [idx] = '\0';
}

{
        int char_count = 0;
        int strlen = _strlen(str);
        int idx = 0;
        int jdx = 0;
        char *retstr;

        strlen = _strlen(str);

        while(idx < strlen)
        {
                if(str[idx] != target)
                {
                        char_count++;

                }
                idx++;
        }

        retstr [idx] = '\0';
}

{
        int char_count = 0;
        int strlen = _strlen(str);
        int idx = 0;
        int jdx = 0;
        char *retstr;

        strlen = _strlen(str);

        while(idx < strlen)
        {
                if(str[idx] != target)
                {
                        char_count++;

                }
                idx++;
        }

        retstr [idx] = '\0';
}
