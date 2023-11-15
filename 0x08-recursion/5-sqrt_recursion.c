#include "main.h"
/**
 * fun - supporting function
 * @y: the number
 * @x: the root
 *
 * Return: the square root
 */
int fun(int y, int x)
{
	if (x * x > y)
	{
		return (-1);
	}
	else if (x * x == y)
	{
		return (x);
	}
	else
	{
		return (fun(y, x + 1));
	}
}
/**
 * _sqrt_recursion - prints the square root
 * @n: the number
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (fun(n, 0));
}
