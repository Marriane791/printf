#include "main.h"

/**
*print_char returns the character
*@buff_dest: buffer
*@buff_count: index of buffer pointer
*Return: buffer index
*/

int print_char(char *buff_dest, va_list arg, int buff_count)
{
       char c = va_arg(arg);


	buff_dest[buff_count] = c;

	return (++buff_count);

}

