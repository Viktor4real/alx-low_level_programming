#include "main.h"
/**
 * print_array - print elements of an arrray
 * @n: function paramter
 * @a: function paramter
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] < a[n] ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
