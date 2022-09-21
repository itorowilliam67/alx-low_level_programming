#include "main.h"
/**
 * _strcpy -  popiar el contenido de uno a otra variable
 * @destL:this is destiny
 * @src: This is the copia
 *
 * Return; this return copy
 */
char 8 _strcpy(char *dest, char *src)
{
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	Return (start);
}
