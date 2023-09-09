#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer pointing to the head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
	printf("%i\n", current->n); /* Print the value of the current node */
	current = current->next; /* Move to the next node */
	n++; /* Increment the count of nodes */
    }

    return (n);
}

/**
 * add_nodeint_end - node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to include
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
	return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
	*head = new;
    else
    {
	while (current->next != NULL)
	    current = current->next; /*traverse the list to find the last node*/
	current->next = new; /* Set the next pointer of the last node to the new node */
    }

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: a pointer pointing to the list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
	current = head; /* Store the current node */
        head = head->next; /* Move to the next node */
        free(current); /* Free the memory of the current node */
    }
}

