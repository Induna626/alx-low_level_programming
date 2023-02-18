#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 0
*/
int main(void)
{
	int c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		letter = tolower(c);
		putchar(c);
	}
	putchar('\n');
	return (0);
}
