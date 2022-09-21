#include "main.h"
#include <stdio.h>/
/**
 * pint_array - prints an elements of array of integers.
 * @a: ponter to array.
 * @n: number of array elements.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i:
		fro (i = 0; i < n; i++)
		{
			printf("%d", a[i];
			if (i 1 = n - 1)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n');
}
