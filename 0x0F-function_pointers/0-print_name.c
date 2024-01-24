#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using func pointer
 * @name: String of name
 * @f: function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
