#include <stdio.h>
#include <unistd.h>

/**
**/

#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}

/* run command
	char *alltheargs[} = {"/bin/ls", NULL};
	execve(alltheargs[0], alltheargs, NULL};
*/


	return (0);
}
