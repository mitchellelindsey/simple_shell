#include "shellinput.h"
#include "function.h"

/**
 * main - The simple shell main program
 * Description: This task/program runs a basic shell
 * @ac: argument count
 * @av: arguments vector
 * Return: on success (0)
 **/

int main(int ac, char **av)
{
	int status;
	shellinput_t *mytype;

	mytype = malloc(sizeof(shellinput_t));
	if (mytype == NULL)
	{
		perror(av[0]);
		exit(1);
	}

	mytype->pid = getpid();
	mytype->code_stat = 0;
	mytype->n_cmd = 0;
	mytype->argc = ac;
	mytype->argv = av;
	mytype->it_mode = isatty(0) == 1;
	begin(mytype);

	status = mytype->code_stat;

	free(mytype);

	return (status);
}
