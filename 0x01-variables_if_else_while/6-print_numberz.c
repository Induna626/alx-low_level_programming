#include <stdio.h>
#include <ctype.h>
/**
*main - Prints numbers of base 10 and new line
*
*Return: 0 (success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
