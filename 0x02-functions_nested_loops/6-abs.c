#include "main.h"
/**
 * _abs - function that print value of an integer
 * @a: parameter function
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
