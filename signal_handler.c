#include "shellinput.h"

size_t mv_strlen(const char *str);
/**
 * signal_handler - handles signals for ctrl c
 * @signal: signal number
 * Return: nothing
 */
void signal_handler(int signal)
{
	char *prompt = "\n$ ";

	(void)signal;
	write(1, prompt, mv_strlen(prompt));
	fflush(stdout);
}
