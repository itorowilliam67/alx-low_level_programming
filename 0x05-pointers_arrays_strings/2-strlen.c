#include "main.h"

/**
 * _strlen -return the length of the string
 * @s _string
 * Return return length as integer
 */

int _strlen(char *s)
{
	int len =0;

	while (*(s +len) ! = '\0')
		len++;

	return (len);
}


