#include "main.h"
/**
 * printc - print a single character
 * @c: character to be printed
 * Return: integer value
*/
int printc(char c)
{
	if (c == '%')
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
	prints("(null)");
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
