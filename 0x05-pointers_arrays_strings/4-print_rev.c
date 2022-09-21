#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * pring_rev - Print a string in reverse order
 * @s: string to reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
