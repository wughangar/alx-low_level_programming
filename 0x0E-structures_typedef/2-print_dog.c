#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the function
 * @d : pointer to dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %sn", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age ? d->age : 0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
