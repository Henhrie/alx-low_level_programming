#include <stdio.h>
/**
 *main - Prints all three-digit combinations that are possible.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n, m, s;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (s = 50; s < 58; s++)
{
if (s > m && m > n)
{
putchar(n);
putchar(m);
putchar(s);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
