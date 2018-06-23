/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Job sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calendar.h"

int compare_job(employee_t *first)
{
	int res = 0;

	res = strcmp(dict(first, 2), dict((first)->next, 2));
	if (!res)
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

int check_job(employee_t **first, employee_t *last, int *swap)
{
	while ((*first)->next != last) {
		if (compare_job(*first) > 0) {
			swap_data(*first, (*first)->next);
			*swap = 1;
		}
		(*first) = (*first)->next;
	}
	return (0);
}

int bubjob_employee(employee_t *start, char **tab)
{
	employee_t *first = NULL;
	employee_t *last = NULL;
	int swap = 0;

	if (start == NULL)
		return (-1);
	do {
		swap = 0;
		first = start;
		check_job(&first, last, &swap);
		last = first;
	} while (swap);
	return (employee_print(start, tab));
}
