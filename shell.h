#ifndef SHELL_H
#define SHELL_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <sys/stat.h>
#define BUFFER_LEN 1024
extern char **environ;

char *concat_all(char *s1, char *s2);
char *find_path(char *av);
char **split_line(char *line, int bufsize);
int check_builtin(char *argvv);
void print_env(void);
void builtins(char **argvv, int i);
void exec_command(char **argvv);
void __exit(char **argvv);
void change_dir(char **argvv);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
int _strlen(char *s);
char *read_line();
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_getenv(char *env);

#endif

