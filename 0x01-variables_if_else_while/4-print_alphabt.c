#include <stdio.h>
/**
* main - entry point
* discription: 'print alphabet in lowercase except q and e'
* Return: (0) sucess
*/
int main(void)
{
int n = 97;

while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
