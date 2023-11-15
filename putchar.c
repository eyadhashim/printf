#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

