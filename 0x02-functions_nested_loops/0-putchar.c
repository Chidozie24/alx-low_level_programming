#include "main.h"

/**
 * main - prints the word _putchar
 *
 * Return: 0 on success execution.
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
