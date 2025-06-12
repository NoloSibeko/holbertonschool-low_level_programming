#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test reset_to_98
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 42;

	printf("Before: %d\n", x);
	reset_to_98(&x);
	printf("After: %d\n", x);
	return (0);
}
