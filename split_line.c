#include "shell.h"
/**
* split_line - parses the input string
* @line: string
* @bufsize: size of buffer for allocation
*Return: void
*/
char **split_line(char *line, int bufsize)
{
char *token = NULL;
int i = 0;
char **argvv = malloc(sizeof(char *) * bufsize);
if (!argvv)
{
write(STDERR_FILENO, "hsh: allocation error\n", 22);
free(argvv);
exit(0);
}

token = strtok(line, " ");
while (token != NULL)
{
argvv[i] = token;
token = strtok(NULL, " ");
i++;
if (i >= bufsize)
{
bufsize += BUFFER_LEN;
argvv = _realloc(argvv, sizeof(argvv), bufsize *sizeof(char *));
if (!argvv)
{
write(STDERR_FILENO, "hsh: allocation error\n", 22);
exit(0);
}
}

}
argvv[i] = NULL;

return (argvv);
}
