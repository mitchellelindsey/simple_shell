#include "function.h"
#include "shellinput.h"

/**
 * systemFunction - This function will help check for exec builtins
 * @mytype: a struct with a datatype of info
 * @args: the command
 * Return: 1 for buitin command 0 if not
 **/

int systemFunction(shellinput_t *mytype, char **args)
{
	int update;

	update = verifyBuiltin(mytype, args);
	if (update == 0)
	{
		return (0);
	}

	return (1);
}
