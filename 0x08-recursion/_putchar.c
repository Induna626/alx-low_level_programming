#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the std output
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, -1 is returnedand erno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
