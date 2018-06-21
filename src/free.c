/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Free functions
*/

#include <stdlib.h>
#include "calendar.h"

int free_tab(char **tab)
{
	for (int i = 0; tab[i]; i++)
		free(tab[i]);
	free(tab);
	return (0);
}

int meeting_free(meeting_t *meeting)
{
	meeting_t *tmp = meeting;
	meeting_t *save = NULL;

	while (tmp) {
		free(tmp->id);
		free(tmp->date);
		free(tmp->place);
		free_tab(tmp->pers);
		save = tmp;
		tmp = tmp->next;
		free(save);
	}
	return (0);
}

int employee_free(employee_t *employee)
{
	employee_t *tmp = employee;
	employee_t *save = NULL;

	while (tmp) {
		free(tmp->last_name);
		free(tmp->first_name);
		free(tmp->position);
		free(tmp->city);
		free(tmp->id);
		save = tmp;
		tmp = tmp->next;
		free(save);
	}
	return (0);
}