#include "holberton.h"

/**
 * modulus - calc the modulus of a complex number
 * @c: complex to calc
 * Return: Modulus of c
 */

double modulus(complex c)
{
	double ret;

	ret = sqrt((pow(c.re, 2)) + (pow(c.im, 2)));
	return (ret);
}
