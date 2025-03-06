#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *
 *@s: string to be checked
 *@accept: string to be compared
 *
 * Return:
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			break;
		}
		len++;
	}
				
	return (len);
}
