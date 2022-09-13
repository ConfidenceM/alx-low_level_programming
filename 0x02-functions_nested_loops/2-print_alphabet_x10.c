#include "main.h"

/**
 * prints-alphabets x10 lowercase on a new line
 * print alphabet_x10 void = 0
 * returns =alaways sucess
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

	_putchar('\n');
return (0);
}
