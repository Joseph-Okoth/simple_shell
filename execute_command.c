#include "shell.h"
/**
* exec_command - execute command
* @argvv: array of strings to check
*Return: void
*/
void exec_command(char **argvv)
{
int pid = 0;
if (!argvv || !argvv[0])
return;
pid = fork();
if (pid == 0)
{
if (execve(argvv[0], argvv, NULL) == -1)
{
perror("hsh");
exit(0);
}
}
else if (pid == -1)
{
perror("hsh error - child is -1");
exit(-1);
}
else
wait(NULL);
}
