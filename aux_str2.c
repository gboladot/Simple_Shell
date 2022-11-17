#include "main.h"

/**
 * _strdup - duplicates a str in the heap memory.
 * @s: Type char pointer str
 *
 * Return: duplicated str
 */

char *_strdup(const char *s)
{
	char *new;
	size_t len;
