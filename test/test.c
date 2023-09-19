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
	printf("\n%s\n", "Mo Salah");

	/*task 0 : printing a character*/
	_printf("%c", 'J');
	printf("\n%c\n", 'J');

	/*task 0 : printing % using %%*/
	_printf("%%");
	printf("\n%%\n");

	/*task 1 : printing integer using %d*/
	_printf("%d", 12);
	printf("\n%d\n", 12);

	/*task 1 : printing an integer using %i*/
	_printf("%i", 24);
	printf("\n%i\n", 24);
	return (0);
}
