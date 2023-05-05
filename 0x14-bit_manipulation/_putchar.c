#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c => stdout
 * @c: character => print
 *
 * Returns: if ->  success. 1.
 * if error(s), -1 is returned, && errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

