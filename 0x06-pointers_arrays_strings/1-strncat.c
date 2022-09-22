#include "main.h"

/**
 * _strncat - Function that concatenates two strings that
 * will also copy at most an inputted number
 * of bytes from string src into dest.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from @src to be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	return (dest);
}
