#include "lists.h"
/**
 * free_list- frees a list_t list.
 * @head: address of pointer to head
 * Return: size
 */
void free_list(list_t *head);
{
	list_t *node;

	if (!head)
		return;
	node = head;
	while (nod)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
