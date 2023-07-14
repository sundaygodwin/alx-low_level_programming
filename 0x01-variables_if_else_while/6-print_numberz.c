#include <stdio.h>
/**
* main - entry point
* discription: 'print single digit using putchar'
* Return: 0
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
