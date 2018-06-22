/*
** EPITECH PROJECT, 2018
** Lucas Duboisse
** File description:
** requirement
*/

#include <stdlib.h>
#include <stdio.h>
#include "requirement.h"

int my_revlist_synthesis(list_t **begin)
{
	list_t *next = NULL;
	list_t *prev = NULL;
	list_t *tmp = *begin;

	if (*begin == NULL)
		return (84);
	while (tmp != NULL) {
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
	}
	*begin = prev;
	return (0);
}

list_t *my_findnodeeqinlist_synthesis(list_t *begin, void *data_ref,
					int(*cmp)(void *, void *))
{
	list_t *tmp = begin;

	if (begin == NULL)
		return (NULL);
	while (tmp != NULL) {
		if (cmp(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
