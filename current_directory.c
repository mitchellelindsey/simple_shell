#include "function.h"
#include "shellinput.h"

/**
 * getCurrentDir - This function will help execute a command
 * @comm: Command to execute is passed here
 * @argu: Argument passed with the command is passed here
 * @buff: Line readed or the buffer received
 * @mytype: a struct that contains general info
 * Return: a number which equate the status of the program
 **/

int getCurrentDir(char *comm, char **argu, char *buff, shellinput_t *mytype)
{

	if (mytype->cur_path == 0)
	{
		return (0);
	}

	if (isExecutable(comm) == 1)
	{
		run(comm, argu, mytype, buff);
		return (1);
	}

	return (0);
}
