#include "shellinput.h"
size_t mv_strlen(const char *str);
/**
 * mv_strdup - duplicating string
 * @str: string to be duplicated
 * Return: string
 */
char *mv_strdup(const char *str)
{
	size_t length = mv_strlen(str) + 1;
	char *new_str = (char *)malloc(length);
	size_t i = 0;

	if (new_str == NULL)
		return (NULL);

	for (; i < length; i++)
		new_str[i] = str[i];

	return (new_str);
}
