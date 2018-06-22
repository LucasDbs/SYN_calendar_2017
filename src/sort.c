/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Sort functions
*/

#include <stdio.h>
#include <string.h>
#include "calendar.h"

int str_swap(char **a, char **b)
{
	char *swap = *a;

	printf("a = %s\n", *a);
	*a = *b;
	printf("a = %s\n", *a);
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

int check_swap(employee_t **first, employee_t *last, int *swap, int i)
{
	while ((*first)->next != last) {
		if (strcmp(dict(*first, i), dict((*first)->next, i)/*(*first)->data, (*first)->next->data*/) > 0) {
			printf("ici\n");
			swap_data(*first, (*first)->next);
			*swap = 1;
		}
		(*first) = (*first)->next;
	}
	return (0);
}

int bubstr_employee(employee_t *start, int i)
{
	employee_t *first = NULL;
	employee_t *last = NULL;
	int swap = 0;

	if (start == NULL)
		return (-1);
	do {
		swap = 0;
		first = start;
		check_swap(&first, last, &swap, i);
		last = first;
	} while (swap);
	return (0);
}

/*int sort_employee(char *res, meeting_t **meeting, employee_t **employee)
{
	char **tab = str_to_word_tab(res, ' ');

	if (tab == NULL || tab_size(tab) < 2)
		return (-1);
	else
		manage_sort(tab[1], res, meeting, employee);
	free_tab(tab);
	return (0);
}*/