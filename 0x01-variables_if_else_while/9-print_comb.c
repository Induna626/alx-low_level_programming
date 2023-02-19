#include <stdio.h>
#include <ctype.h>
/**
*main - Prints numbers with a , and a space followed by new line
*
*Return: 0 (success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
