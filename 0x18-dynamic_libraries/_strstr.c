#include "main.h"

/**
 * _strstr - locate and return pointer to the first occurrence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to the index of the string at the first occurrence of the whole substring
 */
char *_strstr(char *haystack, char *needle)
{
    int i = 0, j, x;

    if (needle[0] == '\0')
    {
        return haystack;
    }

    while (haystack[i] != '\0')
    {
        /* Check if a byte matches the first character of the needle */
        if (haystack[i] == needle[0])
        {
            x = i, j = 0;

            /* Iterate through needle until the match ends */
            while (needle[j] != '\0')
            {
                if (haystack[x] == needle[j])
                {
                    x++;
                    j++;
                }
                else
                {
                    break;
                }
            }

            if (needle[j] == '\0')
            {
                return (haystack + i);
            }
        }

        i++;
    }

    return NULL; /* No match */
}
