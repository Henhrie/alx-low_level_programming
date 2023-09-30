#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 * to convert one number to another.
 * @n: The source number.
 * @m: The destination number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nflips = 0;

/* XOR the two numbers to find differing bits and count them. */
while (n > 0 || m > 0)
{
nflips += (n & 1) ^ (m & 1);
n >>= 1;
m >>= 1;
}

return nflips;
}
