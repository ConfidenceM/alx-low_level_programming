#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to alphebet letters except q and e by new line
 *
 * Return : retuen 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar(letter);
	return (0);
}
