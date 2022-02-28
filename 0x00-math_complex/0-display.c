#include "holberton.h"

/**
 * display_complex_number - prints complex number c
 * @c: complex to print
 */

void display_complex_number(complex c)
{
	if (c.im > 0 &&  c.im != 1)
		printf("%g + %gi\n", c.re, c.im);
	else if (c.im == 0)
		printf("%g\n", c.re);
	else if (c.im < 0 && c.im != (-1))
		printf("%g - %gi\n", c.re, (c.im * (-1)));
	else if (c.im == 1)
		printf("%g + i\n", c.re);
	else
		printf("%g - i\n", c.re);
}
