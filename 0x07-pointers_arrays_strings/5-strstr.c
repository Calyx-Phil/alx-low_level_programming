#include "main.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int e;
	int p = 0;

	while (needle[p] != '\0')
		p++;

	while (*haystack)
	{
		for (e = 0; needle[e]; e++)
		{
			if (haystack[e] != needle[e])
				break;
		}
		if (e != p)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
