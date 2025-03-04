#include "main.h"

/**
 *_memcpy - copys n bytes to dest address
 *
 *@dest: destination address
 *@src: source address
 *@n: number of bytes
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
