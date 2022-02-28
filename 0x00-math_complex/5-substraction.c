#include "holberton.h"

/**
 * substraction - performs substraction of complex numbers
 * @c1: first complex
 * @c2: second complex
 * @c3: result complex
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
