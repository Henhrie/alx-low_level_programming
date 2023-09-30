#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer to search.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63) /* Ensure that the index is within the valid range. */
return (-1);

return ((n >> index) & 1);
}
