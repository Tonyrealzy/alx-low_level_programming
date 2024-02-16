#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the new node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *current = *head;

    if (current == NULL)
        return -1;

    while (current->prev != NULL)
        current = current->prev;

    while (current != NULL)
    {
        if (i == index)
        {
            if (i == 0)
            {
                *head = current->next;
                if (*head != NULL)
                    (*head)->prev = NULL;
            }
            else
            {
                current->prev->next = current->next;

                if (current->next != NULL)
                    current->next->prev = current->prev;
            }

            free(current);
            return 1;
        }

        current = current->next;
        i++;
    }

    return -1;
}
