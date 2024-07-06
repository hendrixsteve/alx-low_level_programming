#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * code body
 * Return: Always 0 successful 
 */

void print_alphabet(void) 

{
	char letter = 'a';

	for (letter = 'a'; <= 'z'; letter++) 
	{
		_putchar(letter);
	}
		_putchar('\n');
}

