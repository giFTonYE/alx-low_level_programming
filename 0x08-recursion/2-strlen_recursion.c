#include "main.h"

/**
 * _strlen_recursion - Return length of string
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set apprioprately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recuresion(s +1));
	}
	return (0);
}
