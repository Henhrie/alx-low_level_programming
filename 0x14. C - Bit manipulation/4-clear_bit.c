#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index at which to set the bit to 0 (0-based).
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Ensure that the index is within a valid range and the pointer is not NULL. */
    if (index > 63 || n == NULL)
        return (-1);

    *n &= ~(1UL << index); /* Clear the bit at the specified index. */

    return (1); /* Operation successful. */
}