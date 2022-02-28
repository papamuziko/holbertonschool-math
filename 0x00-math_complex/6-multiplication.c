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
