#include "holberton.h"

/**
 * addition - performs the addition of complex numbers
 * @c1: First complex
 * @c2: Second complex
 * @c3: Storing complex
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c2.re + c1.re;
	c3->im = c2.im + c1.im;
}
