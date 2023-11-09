#include "list.h"
/**
 * print_dlisint-prints all the elements of a dlistint_t list.
 * @q: pointer to the list.
 * Return: number of nodes.
 * **/
size_t print_dlistint(const dlistint_t *q)
{
	const dlistint(const dlistint_t *q)
	size_t cont = 0;
	while (node)
	{
	printf("%i/n", node->n);
	cont++;
	node = node->next;
	}
	return (cont);
}
