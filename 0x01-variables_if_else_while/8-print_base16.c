#include <stdio.h>
#include <ctype.h>
/**
*main - Prints hexidecimal numbers and a new line
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
		{
			num = 'a';
			for (; num <= 'f'; num++)
			{
				putchar(num);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
