#include <stdio.h>
/**
* main - entry point
* discription: 'print all combination of single numbers'
* Return: 0
*/
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
