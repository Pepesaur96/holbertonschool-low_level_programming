#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - uses *f function to print name
 * @name: char
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
