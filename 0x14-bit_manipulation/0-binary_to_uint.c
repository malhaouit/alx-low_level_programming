#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts binary to decimal
 * @b: The string containing binary digits
 *
 * Return: The decimal number if success or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		decimal = decimal << 1;

		if (*b == '1')
			decimal += 1;

		b++;
	}

	return (decimal);
}
