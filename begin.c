#include "shellinput.h"
#include "function.h"

/**
 * begin - Handle the mode of the shell
 * Description: Mode can be 1 or 0
 * @mytype: Struct of information about the shell
 * Return: nothing
 **/

void begin(shellinput_t *mytype)
{
	initiatePrompt(mytype);
}
