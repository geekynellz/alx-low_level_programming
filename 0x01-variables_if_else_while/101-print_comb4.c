#include <stdio.h>
/**
 * main - print all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int u, v, x;
for (u = 48; u < 58; u++)
{
for (v = 49; v < 58; v++)
{
for (x = 50; x < 58; x++)
{
if (x > v && v > u)
{
putchar(u);
putchar(v);
putchar(x);
if (u != 55 || v != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
