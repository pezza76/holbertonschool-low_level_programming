#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - concatenates two strings
 *
 *@s1: string
 *@s2: string
 *@n: int
 *Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i;
	unsigned int size = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size] != '\0')
	{
		len1++;
		size++;
	}
	size = 0;
	while (s2[size] != '\0' && len2 < n)
	{
		len2++;
		size++;
	}
	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
