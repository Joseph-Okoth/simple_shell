#include "main.h"

/**
 * get_sigint - Handling the crtl + c call in prompt
 * @sig: Signal handling
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
