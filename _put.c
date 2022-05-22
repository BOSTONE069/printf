#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: length of string
 */
int _puts(char *str)
{
	char *a = str;

	/* call _putchar on each char */
	while (*str)
		_putchar(*str++);

	return (str - a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		/* write(filedescriptor[1==stdout], buffer, count to print) */
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;

	return (1);
}
