#include "main.h"

/**
 * error_env - error message for env in get_env.
 * @datash: data relevant (counter, arguments)
 *
 * Return: error message.
 */

char *error_env(data_shell *datash)
{
	int length;
	char *error;
	char *ver_str;
	char *msg;
