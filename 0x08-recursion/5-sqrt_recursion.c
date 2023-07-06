#include "main.h"
/**
 * math - Finds the square root of two numbers
 * @d: The number
 * @y: The number to test for the square root of @a
 * Return: square root
 */
int math(int d, int y)
{
	if (y * y > d)
		return (-1);

	else if (y * y == d)
		return (y);

	else
		return (math(d, y + 1));

	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (math(n, 1));
}
