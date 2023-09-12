#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints dog attributes.
 * @d: Pointer to the sturct dog to be printed.
 *
 * Description: This function prints the name, age and owner.
 * If any of these elements is NULL, the function prints "(nil)"
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
