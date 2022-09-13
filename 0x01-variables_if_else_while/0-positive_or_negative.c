i#include <stdlib.h>

#include <time.h>

/** more headers goes there
 * always return 0
 * main entry point 
* betty style doc for function main goes there
*/

int main(void)

{
		int n;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
	int n;
	srand(time(0));
	n=rand()-RAND_MAX / 2;
	if (n > 0){
		printf("%i is negative\n",n);}
	else if  (n == 0){
		printf("%i is Zero\n",n);}
	else{ 
		printf("%i is positive\n",n);}
		
	return 0;
}


			srand(time(0));

				n = rand() - RAND_MAX / 2;

				

				return (0);

}
