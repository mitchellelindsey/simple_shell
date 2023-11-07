#include "function.h"
#include "shellinput.h"
/**
 * _strcmp - compare two strings
 *
 * @v1: first string
 * @v2: second string
 *
 * Return: (0) when its same
 */
int _strcmp(char *v1, char *v2)
{
	int i;
	int b = 0;

	for (i = 0; v1[i] != '\0' && b == 0; i++)
	{
		b = v1[i] - v2[i];
	}

	return (b);
}
