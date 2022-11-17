#include "main.h"

/**
 * cd_shell - changes current directory
 *
 * @datash: data relevant
 * Return: 1 on success
 */

int cd_shell(data_shell *datash)
{
	char *dir;
	int ishome, ishome2, isddash;
