#include "putchar"

/**
  * main - prints a string
  * ----------------------
  *
  * @void: no parameter
  *
  * Return: 0
  *
 **/

int main(void)
{
	/*
	 * -- code fails --
	 *
	 * char char_array[] = "putchar";
	 * int index, array_size;

	 * array_size = sizeof(char_array) / sizeof(char);
	 * for (index = 0; index != array_size; index++)
	 * {
	 *	_putchar(char_array[index]);
	 * }
	 * _putchar('\n');
	 * return (0);
	*/
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	
	return (0);
}
