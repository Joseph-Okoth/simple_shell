#include "shell.h"
#include <signal.h>
/**
* sig_handler - checks if Ctrl C is pressed
* @sig_num: int
*/
void sig_handler(int sig_num)
{
if (sig_num == SIGINT)
write(1, "\n$ ", 3);
}


/**
*main - main program for the shell project
*
*Return: 0
*/
int main(void)
{
int bufsize = BUFFER_LEN, i;
char **argvv;
char *line;
struct stat sfile;

signal(SIGINT, sig_handler);
while (1)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "$ ", 2);

line = read_line();

argvv = split_line(line, bufsize);
if (!argvv || argvv[0] == NULL)
{
exec_command(argvv);
}
else
{
i = check_builtin(argvv[0]);
if (i >= 0)
builtins(argvv, i);
else
{
if (stat(argvv[0], &sfile) != 0)
{
argvv[0] = find_path(argvv[0]);
}

exec_command(argvv);
}
}
free(argvv);
}
return (0);
}
