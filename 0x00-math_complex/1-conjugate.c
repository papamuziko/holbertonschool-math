#include "holberton.h"

/**
 * conjugate - calculates the conjugate of a complex number
 * @c: complex to calculate its conjugate
 * Returns: c conjugate
 */

complex conjugate(complex c)
{
	complex ret;

	ret.re = c.re;
	ret.im = (c.im) * (-1);
	return (ret);
}
