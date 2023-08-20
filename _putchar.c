#include <unistd.h>

/**
 * _putchar - function to write the character of unsigned char to stdout.
 * @c: charcter.
 * Return: return character if success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
