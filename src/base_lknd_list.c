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

int meeting_print(meeting_t *first)
{
	meeting_t *tmp = first;

	while (tmp) {
		printf("******************************\n");
		printf("MEETING\n");
		printf("id = %s\n", tmp->id);
		printf("date = %s\n", tmp->date);
		printf("place = %s\n", tmp->place);
		tab_print(tmp->pers);
		tmp = tmp->next;
	}
	return (0);
}

int employee_print(employee_t *first)
{
	employee_t *tmp = first;

	while (tmp) {
		printf("******************************\n");
		printf("EMPLOYEE\n");
		printf("first_name = %s\n", tmp->first_name);
		printf("last_name = %s\n", tmp->last_name);
		printf("position = %s\n", tmp->position);
		printf("city = %s\n", tmp->city);
		printf("id = %s\n", tmp->city);
		tmp = tmp->next;
	}
	return (0);
}