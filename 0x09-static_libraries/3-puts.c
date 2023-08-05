#include "main.h"

/**
 * _puts - Program print a string
 * @str: The string program should print
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
