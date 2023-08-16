#include "function_pointers.h"

/**
 * print_name - function to print a name.
 * @name: pointer to name (string)
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	/**
	 * print_name is a function that takes two params:
	 * a string pointer (name) and a function pointer (f).
	 *
	 * This is a function calling a function.
	 * So, since it is calling another function, the only
	 * line of code in its body is the function being called
	 * (pointed to by the function pointer (*f)), and the
	 * argument of the function being called (a string being
	 * pointed to by a string (*name).
	 *
	 * Basically, the print_name prints a name, but not by itself
	 * It simply calls some other function, written somewhere in
	 * the program, and asks passes to the function the string it
	 * wants to prints.
	 */

	if (name == NULL)
		name = "";
	f(name);
}
