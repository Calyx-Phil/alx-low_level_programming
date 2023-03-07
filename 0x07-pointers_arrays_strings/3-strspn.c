#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f = 0;
	int u;

	while (*s)
	{
		for (u = 0; accept[u]; u++)
		{
			if (*s == accept[u])
			{
				f++;
				break;
			}
			else if (accept[u + 1] == '\0')
				return (f);
		}
		s++;
	}
	return (f);
}

