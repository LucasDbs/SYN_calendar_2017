/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Print
*/

#include <stdio.h>
#include "calendar.h"

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
		printf("%s ", tmp->first_name);
		printf("%s\n", tmp->last_name);
		printf("position = %s\n", tmp->position);
		printf("city = %s\n", tmp->city);
		tmp = tmp->next;
	}
	return (0);
}
