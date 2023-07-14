#include <stdio.h>
/**
* main - entry point
* discription: 'print alphabet in lowercase'
* Return: (0) sucess
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
