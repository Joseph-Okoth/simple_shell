#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include "shell.h"


/**
* _realloc - reallocates a memory block using malloc and free.
* @ptr: pointer to previously allocated memory
* @old_size: size of allocated space for ptr
* @new_size: size of newly allocated space
*
* Return: pointer or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pointer;
unsigned int i, max = new_size;
char *old_pointer = ptr;

if (ptr == NULL)
{
pointer = malloc(new_size);
return (pointer);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

pointer = malloc(new_size);
if (pointer == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
pointer[i] = old_pointer[i];
free(ptr);
return (pointer);
}

/**
* _getenv - get an environment variable
* @env: environment in args
* Return: pointer to char
*/

char *_getenv(char *env)
{
int i, j;
char *val;

if (!env)
return (0);
for (i = 0; environ[i]; i++)
{
j = 0;
if (env[j] == environ[i][j])
{
while (env[j])
{
if (env[j] != environ[i][j])
break;
j++;
}
if (env[j] == '\0')
{
val = (environ[i] + j + 1);
return (val);
}
}
}
return (0);
}


/**
* check_builtin - check if the string passed is a builtin
* @argvv: string to check
*Return: -1 on falure & >= 1 on success
*/
int check_builtin(char *argvv)
{
int i = 0;
char *cm[4];

cm[0] = "exit";
cm[1] = "cd";
cm[2] = "help";
cm[3] = "env";
while (i < 4)
{
if (_strcmp(argvv, cm[i]) == 0)
return (i + 1);
i++;
}
return (-1);
}
