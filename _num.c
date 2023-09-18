#include "main.h"
/**
 * numc - function counts the numbers of digits.
 * @n: the digits.
 * Return: count.
 */

int numc(int n)
{
	int count = 0;

	if (n < 0)
		count += 1;

	do {
		n /= 10;
		++count;
	} while (n != 0);

	return (count);
}
