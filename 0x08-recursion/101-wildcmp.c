#include "main.h"
/**
 * wildcmp - Compare strings
 * @h1: pointer to string params
 * @h2: pointer to string params
 * Return: 0
 */
int wildcmp(char *h1, char *h2)
{
	if (*h1 == '\0')
	{
		if (*h2 != '\0' && *h2 == '*')
		{
			return (wildcmp(h1, h2 + 1));
		}
		return (*h2 == '\0');
	}

	if (*h2 == '*')
	{
		return (wildcmp(h1 + 1, h2) || wildcmp(h1, h2 + 1));
	}
	else if (*h1 == *h2)
	{
		return (wildcmp(h1 + 1, h2 + 1));
	}
	return (0);
}
