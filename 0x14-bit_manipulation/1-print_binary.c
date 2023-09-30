#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be represented in binary.
 */
void print_binary(unsigned long int n)
{
/* Base case: If n is greater than 1, continue recursion. */
if (n > 1)
print_binary(n >> 1);

/* Print the least significant bit (LSB) of n. */
_putchar((n & 1) ? '1' : '0');
}
