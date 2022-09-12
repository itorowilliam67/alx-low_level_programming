#include <stdio.h>
/**
 * this program will print the alphabet followed by a new line
 * th '\n' command will break the output in to a new line
 */
int main ()
{
char ch = 'a';
while (ch <='z')
{
	printf("%c\n",ch);
	ch++;
}
return 0;
}
