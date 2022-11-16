#include "main.h"

/**
 * copy_info - copies info to create
 * a new env or alias
 * @name: name (env or alias)
 * @value: value (env or alias)
 *
 * Return: new env or alias.
 */

char *copy_info(char *name, char *value)
{
	char *new;
	int len_name, len_value, len;
