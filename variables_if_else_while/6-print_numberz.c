#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers 0-9 using putchar twice
 *              without using char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    for (num = 0; num < 10; num++)
        putchar(num + '0');

    putchar('\n');
    return (0);
}
