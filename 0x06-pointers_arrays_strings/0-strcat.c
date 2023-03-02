#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, dest_key = 0;

	while (dest[i++])
	{
		dest_key++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_key++] = src[i];
	}
	return (dest);
}