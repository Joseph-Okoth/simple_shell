#include <stdio.h>
#include "shell.h"
#include <string.h>
/**
* read_line - read a line from input
*
* Return: string read
*/
char *read_line(void)
{
char *line = NULL;
size_t length = 0;
int read;

read = getline(&line, &length, stdin);
if (read == -1)
{
if (isatty(STDIN_FILENO))
write(1, "\n", 1);
exit(0);
}
line = strtok(line, "\n");

return (line);
}
