#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @head: pointer
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
        listint_t *next, *ioopnode;
        size_t len;

        if (h == NULL || *h == NULL)
                return (0);

        loopnode = find_listint_loop_fl(*h);
        for (len = 0; (*h ! = loopnode || loop) && *h != NULL; *h = next)
        {
                len++;
                next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
        }

}
