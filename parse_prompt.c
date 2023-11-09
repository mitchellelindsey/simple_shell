#include "function.h"
#include "shellinput.h"

/**
 * parse_prompt - getline function to read the line of the prompt
 * Description: it will also handle the end of file
 * Return: Buffer readed or NULL after freeing the read prompt if EOF
 **/

char *parse_prompt(void)
{
	char *buffer = NULL;
	int ret;
	size_t size;

	ret = getline(&buffer, &size, stdin);

	if (ret == EOF)
	{
		releaseMemory((void *) buffer);
		return (NULL);
	}

	return (buffer);
}
