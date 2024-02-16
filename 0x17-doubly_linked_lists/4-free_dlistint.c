#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp_node;

    while (head != NULL && head->prev != NULL)
        head = head->prev;

    while ((tmp_node = head) != NULL)
    {
        head = head->next;
        free(tmp_node);
    }
}
