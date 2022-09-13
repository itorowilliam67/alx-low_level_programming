#include <stdio.h>
/**
 * this program will print the alphabet followed by a new line
 * the '\n' command will break the output in to a new line
 */
int main (void)
{
	char c;
	c = 'a';
	while (c <= 'z') {
			putchar (c);
			c++;
		}
	putchar('\n');
return 0;
}
