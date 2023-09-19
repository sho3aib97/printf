#include "main.h"
/**
 * printc - print a single character
 * @c: character to be printed
 * Return: integer value
*/

int printc(char c)
{
	return (write(1, &c, 1));
}

/**
 * prints - print string of characters
 * @s: string to be printed
 * Return: void
*/

int prints(char *s)
{
	if (s)
	{
		unsigned int i, len;

		len = strlen(s);
		for (i = 0; i < len; i++)
			printc(s[i]);
		return (0);
	}
	else
	{
		prints("(null)");
		return (EXIT_FAILURE);
	}
}

/**
 * _strlen - calculate length of str
 * @str : string
 * Return: integer
*/

int _strlen(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		return (i);
	}
	return (0);
}

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

/**
 * printp - print % sign
 * @c : character
 * Return: integer
*/

int printp(char c)
{
	if (c == '%')
		return (write(1, &c, 1));
	else if (c != '%')
	{
		printc('%');
		return (write(1, &c, 1));
	}
	else
		return (EXIT_FAILURE);
}
