#include <stdio.h>

/**
 *main - function prints text as output
 *
 *Return:return 0
 **/

int main(void)
{

char school[10] = "putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(school[i]);
}
putchar(10);
return (0);
}
