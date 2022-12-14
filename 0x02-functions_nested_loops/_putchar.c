#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 *
 * Return: on succes 1.
 * On error, -1 is returned, and errno is appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
