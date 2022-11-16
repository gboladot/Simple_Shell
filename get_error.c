#include "main.h"

/**
 * get_error - calls the error according the builtin, syntax or permission
 * @datash: data structure that contains arguments
 * @eval: error value
 *
 * Return: error
 */

int get_error(data_shell *datash, int eval)
{
	char *error;
