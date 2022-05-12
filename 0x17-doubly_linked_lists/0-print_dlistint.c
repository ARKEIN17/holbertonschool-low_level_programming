#include "list.h"
/**
 *
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	
	for(i = 0; h != NULL; h = h -> next; i ++)
	{
		printf("%d\n", h -> n)
	}
	return(i);
}
