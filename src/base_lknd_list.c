/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** basic linked list functions
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "calendar.h"

employee_t *init_employee(char **tab)
{
	employee_t *new = malloc(sizeof(employee_t));

	if (new == NULL)
		return (NULL);
	new->last_name = strdup(tab[1]);
	new->first_name = strdup(tab[2]);
	new->position = strdup(tab[3]);
	new->city = strdup(tab[4]);
	new->id = strdup(tab[5]);
	new->next = NULL;
	return (new);
}

meeting_t *init_meeting(char **tab)
{
	meeting_t *new = malloc(sizeof(meeting_t));

	if (new == NULL)
		return (NULL);
	new->id = strdup(tab[1]);
	new->date = strdup(tab[2]);
	new->place = strdup(tab[3]);
	new->pers = tab_dup(tab);
	new->next = NULL;
	return (new);
}

int add_employee(employee_t *employee, char **tab)
{
	employee_t *new = malloc(sizeof(employee_t));
	employee_t *tmp = employee;

	if (new == NULL)
		return (1);
	new->last_name = strdup(tab[1]);
	new->first_name = strdup(tab[2]);
	new->position = strdup(tab[3]);
	new->city = strdup(tab[4]);
	new->id = strdup(tab[5]);
	new->next = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (0);
}

int add_meeting(meeting_t *meeting, char **tab)
{
	meeting_t *new = malloc(sizeof(meeting_t));
	meeting_t *tmp = meeting;

	if (new == NULL)
		return (1);
	new->id = strdup(tab[1]);
	new->date = strdup(tab[2]);
	new->place = strdup(tab[3]);
	new->pers = tab_dup(tab);
	new->next = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (0);
}
