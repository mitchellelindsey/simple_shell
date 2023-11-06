#include "function.h"
#include "shellinput.h"

/**
 * getCurrentDir - This function will help execute a command
 * @command: Command to execute is passed here
 * @argu: Argument passed with the command is passed here
 * @buff: Line readed or the buffer received
 * @mytype: a struct that contains general info
 * Return: a number which equate the status of the program
 **/

int getCurrentDir(char *command, char **argu, char *buff, shellinput_t *mytype)
{

	if (mytype->cur_path == 0)
	{
		return (0);
	}

	if (isExecutable(command) == 1)
	{
		run(command, argu, mytype, buff);
		return (1);
	}

	return (0);
}
