#include "function.h"
#include "shellinput.h"
/**
 * isCurrPath - check how the path is being arranged
 * or its order of arrangement
 *
 * @pat: the path to check
 * @mytype: a struct with defined data type
 *
 * Return: just perform task without returning
 **/
void isCurrPath(char *pat, shellinput_t *mytype)
{
	mytype->cur_path = 0;

	if (pat == NULL)
	{
		return;
	}

	if (pat[0] == ':')
	{
		mytype->cur_path = 1;
	}
}
