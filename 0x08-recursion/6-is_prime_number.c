#include "main.h"
/**
 * fun - supporting function
 * @y: the number
 * @x: the checker
 *
 * Return: 1 for success 0 for fail
 */
int fun(int y, int x)
{
	if (y <= 1)
		return (0);
	else if (y == 2)
		return (1);
	else if (y % x == 0)
		return (0);
	else if (x >= (y / 2))
		return (1);
	else
		return (fun(y, x + 1));
}
/**
 * is_prime_number - checks whether the number is prime or not
 * @n: the number
 *
 * Return: 1 for success 0 for fail
 */
int is_prime_number (int n)
{
	return (fun(n, 2));
}
