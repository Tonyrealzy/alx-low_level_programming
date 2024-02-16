#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a doubly linked list.
 * @head: Pointer to the head node of the list.
 * Return: Sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL && head->prev != NULL)
        head = head->prev;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
