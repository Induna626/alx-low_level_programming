#include <stdio.h>
#include <ctype.h>
/**
*main - Prints letters in reverse and newline
*
*Return: return 0
*/
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
