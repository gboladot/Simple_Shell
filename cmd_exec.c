#include "main.h"

/**
 * is_cdir - checks ":" if is in the current directory.
 * @path: type char pointer char.
 * @i: type int pointer of index.
 *
 * Return: 1 if the path is searchable in the cd, 0 otherwise.
 */

int is_cdir(char *path, int *i)
{
	if (path[*i] == ':')
		return (1);
