#include <stdio.h>

/**
 * main - entry point
 *
 * return: alwAYS 0 (SUCCESS)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num +'0');
	putchar('\n');
	return (0);
}
