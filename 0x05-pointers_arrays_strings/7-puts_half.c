#include "main.h"
/**
 *puts_half - print half of string
 *@str: function parametr
 *Return: 0
 */

void puts_half(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		lenght++;
	if (lenght % 2 == 0)
	{
		for (i = lenght / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (lenght % 2 != 0)
	{
		for (i = (lenght - 1) / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
