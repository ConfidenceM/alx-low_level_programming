#include "main.h"

/**
 *print_alphabet_x10- prints-alphabets x10 lowercase on a new line
 * returns =alaways sucess
 */

void print_alphabet_x10(void)
{
int counter = 0;
int j;
while (counter++ <= 9)
{
 for (j = 'a'; j <= 'z'; j++)
_putchar(j);

_putchar(10);

}
