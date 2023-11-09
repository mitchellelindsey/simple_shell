#include "function.h"
#include "shellinput.h"

/**
 * handle_pattern - handles pattern and serves as helper function
 * @mytype: a struct parameter
 * @words: a pointer to a string passed as parameter
 * Return: a pointer to a string
**/

char *handle_pattern(shellinput_t *mytype, char *words)
{
	int j;

	for (j = 0; words[j] != '\0'; j++)
	{
		if (words[j] == '$' && words[j + 1] != '\0')
		{
			words = subtituteValue(mytype, &j, words);
		}
	}

	return (words);
}
