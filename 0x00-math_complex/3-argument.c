#include "holberton.h"

/**
 * argumet - calculates the argument of a complex number
 * @c: complex to calculate argument
 * Return: Argument in radians
 */

double argument(complex c)
{
	double ret;

	ret = atan((c.im) / (c.re));
	return (ret);
}
