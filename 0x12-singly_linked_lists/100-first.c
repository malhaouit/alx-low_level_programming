#include <stdio.h>
#include "lists.h"

void before_main(void) __attribute__((constructor));

/**
 * before_main - Prints a text before the main function executed
 *
 * Return: Nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
