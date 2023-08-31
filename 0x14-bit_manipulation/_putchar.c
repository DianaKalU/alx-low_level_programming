#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to be stout
 * @c: The character to be printed obviousely 
 *
 * Return: return 1 on success 
 * Or -1 on error . 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

