#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @binary: A string representing a binary number.
 *
 * Return: The converted unsigned int, or 0 if it fails.
 */
unsigned int binary_to_uint(const char *binary)
{
unsigned int result = 0;
unsigned int place_value = 1;
int index;

if (!binary)
return (0);


for
(index = 0; binary[index]; index++) { }
index--;

for (; index >= 0; index--)
{
if (binary[index] == '0')
{
place_value *= 2;
continue;
}
else if (binary[index] == '1')
{
result += place_value;
place_value *= 2;
continue;
}
return (0);
}

return (result);
}
