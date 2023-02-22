#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes a character to output
 * char is type and c is character to be output
 * Return: 1 (success)
 * Error -1 is returned. 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

