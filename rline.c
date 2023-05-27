#include "main.h"

/**
 * read_line - reading the inpt str
 *
 * @i_eof: return val of getline function
 * Return: input str
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
