/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Sort by name
*/

#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

int swap_data(employee_t *a, employee_t *b)
{
	str_swap(&a->last_name, &b->last_name);
	str_swap(&a->first_name, &b->first_name);
	str_swap(&a->position, &b->position);
	str_swap(&a->city, &b->city);
	str_swap(&a->id, &b->id);
	return (0);
}

int check_int(employee_t **first, employee_t *last, int *swap)
{
	int a = 0;
	int b = 0;

	while ((*first)->next != last) {
		a = atoi((*first)->id);
		b = atoi((*first)->next->id);
		if (a > b) {
			swap_data(*first, (*first)->next);
			*swap = 1;
		}
		(*first) = (*first)->next;
	}
	return (0);
}

int bubid_employee(employee_t *start)
{
	employee_t *first = NULL;
	employee_t *last = NULL;
	int swap = 0;

	if (start == NULL)
		return (-1);
	do {
		swap = 0;
		first = start;
		check_int(&first, last, &swap);
		last = first;
	} while (swap);
	return (0);
}