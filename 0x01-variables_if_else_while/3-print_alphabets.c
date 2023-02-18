#include <stdio.h>
#include <ctype.h>

/**
*main - Program to print alphabet letters in all cases followed by new line
*
*Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		c = tolower(c);
		putchar(c);
		if (c == 'z')
		{
			c = 'A';
			for (; c <= 'Z'; c++)
			{
				putchar(c);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
