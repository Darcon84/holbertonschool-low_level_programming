#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char minus = 'a';
char mayus = 'A';
while (minus <= 'z')
{
putchar(minus);
minus++;
}
while (mayus <= 'Z')
{
putchar(mayus);
mayus++;
}
{
putchar('\n');
}
return (0);
}
