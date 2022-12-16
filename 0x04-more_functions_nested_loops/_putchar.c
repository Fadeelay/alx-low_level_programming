#include "main.h"
#include <unistd.h>

/**
 * _putchar- prints character c to standout
 * @c: The character to print
 *
 * Return: Always 0
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
