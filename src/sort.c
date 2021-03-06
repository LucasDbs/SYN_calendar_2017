/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Sort functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calendar.h"

int str_swap(char **a, char **b)
{
	char *swap = *a;

	*a = *b;
	*b = swap;
	return (0);
}

char *dict(employee_t *employee, int i)
{
	static char *tab[3];

	tab[0] = employee->last_name;
	tab[1] = employee->first_name;
	tab[2] = employee->position;
	return (tab[i]);
}

int compare_name(employee_t *first)
{
	int res = 0;

	res = strcmp(dict(first, 0), dict((first)->next, 0));
	if (!res)
		res = strcmp(dict(first, 1), dict((first)->next, 1));
	if (!res) {
		if (atoi(first->id) > atoi(first->next->id))
			return (1);
		else
			return (-1);
	}
	return (res);
}

int check_name(employee_t **first, employee_t *last, int *swap)
{
	while ((*first)->next != last) {
		if (compare_name(*first) > 0) {
			swap_data(*first, (*first)->next);
			*swap = 1;
		}
		(*first) = (*first)->next;
	}
	return (0);
}

int bubname_employee(employee_t *start, char **tab)
{
	employee_t *first = NULL;
	employee_t *last = NULL;
	int swap = 0;

	if (start == NULL)
		return (-1);
	do {
		swap = 0;
		first = start;
		check_name(&first, last, &swap);
		last = first;
	} while (swap);
	return (employee_print(start, tab));
}
