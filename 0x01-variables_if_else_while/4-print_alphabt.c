#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letters except q and e followed by new line
*
*Return: 0 (success)
*/
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
