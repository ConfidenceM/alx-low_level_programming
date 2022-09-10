#include <stdio.h>
#include <time.h>
#include<stdlib.h>

/**
*main-entry point of programs
*
*Return: return 0
*betty code for fuction main goes there*/
int main(void)

{
int n;

srand(time(0));
n=rand() -RAND_MAX /2
if (n > 0)
{
printf("%d is positive\n",n)
}
else if (n == 0)
{
printf("%d is zero\n",n);
}
else
printf("%d is negative\n",n);
return(0);
}
