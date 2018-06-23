/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Fire functions
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "calendar.h"

int free_node(employee_t *node)
{
	free(node->last_name);
	free(node->first_name);
	free(node->position);
	free(node->city);
	free(node->id);
	free(node);
	return (0);
}

int delete_node(employee_t **start, employee_t *prev, employee_t *tmp)
{
	if (prev == NULL)
		*start = tmp->next;
	else
		prev->next = tmp->next;
	free_node(tmp);
	return (0);
}

int fire_list(employee_t **employee, char *fire)
{
	employee_t *tmp = *employee;
	employee_t *prev = NULL;
	employee_t *next = NULL;

	while (tmp) {
		next = tmp->next;
		if (strcmp(tmp->id, fire) == 0)
			delete_node(employee, prev, tmp);
		prev = tmp;
		tmp = next;
	}
	return (0);
}

int fire_employee(char *res, employee_t **employee)
{
	char **tab = str_to_word_tab(res, ' ');
	int i = 1;

	if (tab == NULL || tab_size(tab) < 2)
		return (-1);
	while (tab[i]) {
		fire_list(employee, tab[i]);
		i++;
	}
	free_tab(tab);
	return (0);
}