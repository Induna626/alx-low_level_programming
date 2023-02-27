#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length;
 */
int _strlen(char *s)
{
	int count, leng;

	leng = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		leng++;
	}
	return (leng);
}
