#include "holberton.h"

/**
 * multiplication - performs multiplication of complex numbers
 * @c1: First complex
 * @c2: Second complex
 * @c3: Result complex
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) - (c1.im * c2.im));
	c3->im = ((c1.re * c2.im) + (c1.im * c2.re));
}

/**
 * division - performs division of complex numbers
 * @c1: Dividend
 * @c2: Divisor
 * @c3: Quotient
 */

void division(complex c1, complex c2, complex *c3)
{
	complex aux1, aux2;

	aux1.re = c2.re;
	aux1.im = (c2.im) * (-1);
	multiplication(c1, aux1, &aux2);
	c3->re = (aux2.re) / ((c2.re * c2.re) + (c2.im * c2.im));
	c3->im = (aux2.im) / ((c2.re * c2.re) + (c2.im * c2.im));
}
