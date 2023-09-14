#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter.
*@array: input function
*@size: input function
*@action: function pointer
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr = array + (size - 1);

	if (array && size && action)
		while (array <= ptr)
			action(*array++);
}
