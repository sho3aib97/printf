#include "main.h"

/**
 * main - test function for comparson between printf and _printf
 *
 * Return: 0 on success and -1 on failure
*/

int main(void)
{
	/*task 0 : printing an string using %s*/
	_printf("%s", "Mo Salah");
	printf("%s", "Mo Salah");

	/*task 0 : printing a character*/
	_printf("%c", 'J');
	printf("%c", 'J');

	/*task 0 : printing % using %%*/
	_printf("%%");
	printf("%%");

	/*task 1 : printing integer using %d*/
	_printf("%d", 12);
	printf("%d", 12);

	/*task 1 : printing an integer using %i*/
	_printf("%i", 24);
	printf("%i", 24);
	return (0);
}
