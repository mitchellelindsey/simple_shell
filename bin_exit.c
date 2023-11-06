#include "function.h"
#include "shellinput.h"

/**
 * binaryExit - This function helps exit the shell
 * Description: in the program, so many memory are used
 * @mytype: a struct param called info with several variable declaration
 * @args: argument passed to it
 * Return: void or nothing, since it only want to exit the shell
 **/

void binaryExit(shellinput_t *mytype, char **args)
{
	int status, status_dail;

	status = 1;
	if (args[1] != NULL)
	{
		status = manageNumbers(mytype, args[1]);
	}

	if (status == 0)
	{
		return;
	}

	status_dail = mytype->code_stat;

	releaseMemoryPointer((void **) args);
	releaseMemory((void *) mytype->buf);
	releaseMemory((void *) mytype->env);
	releaseMemory((void *) mytype);

	exit(status_dail);
}
