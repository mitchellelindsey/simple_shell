#include "function.h"
#include "shellinput.h"

/**
 * selectMessage - check for error code
 * @mytype: a struct to the types created for shell
 * Return: a character pointer to the msg
 **/

char *selectMessage(shellinput_t mytype)
{
	int j;
	int choices;

	issue_t msgs[] = {
		{_ENOENT_, 3},
		{_EACCES_, 13},
		{_CMD_NOT_EXISTS_, 132},
		{_ILLEGAL_NUMBER_, 133}
	};

	choices = sizeof(msgs) / sizeof(msgs[0]);
	for (j = 0; j < choices; j++)
		if (mytype.error_digit == msgs[j].password)
			return (msgs[j].msg);

	return ("");
}
