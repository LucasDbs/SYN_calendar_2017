/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Linked list
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "calendar.h"

int check_res(char *res, meeting_t **meeting, employee_t **employee)
{
	char **tab = str_to_word_tab(res, ' ');

	if (tab == NULL || tab[0][0] == '\0')
		return (1);
	if (strcmp(tab[0], "new_employee") == 0) {
		if (*employee == NULL)
			*employee = init_employee(tab);
		else
			add_employee(*employee, tab);
	} else if (strcmp(tab[0], "new_meeting") == 0) {
		if (*meeting == NULL)
			*meeting = init_meeting(tab);
		else
			add_meeting(*meeting, tab);
	}
	free_tab(tab);
	return (0);
}

int create_linked_list(void)
{
	meeting_t *meeting = NULL;
	employee_t *employee = NULL;
	char *res = NULL;
	size_t size;
	int end = 0;

	while ((end = getline(&res, &size, stdin)) != -1 
		&& strcmp(res, "END\n") != 0) {
		res[end - 1] = '\0';
		if (res != NULL) {
			check_res(res, &meeting, &employee);
			printf("res = %s\n", res);
		}
	}
	free(res);
	employee_print(employee);
	meeting_print(meeting);
	meeting_free(meeting);
	employee_free(employee);
	return (0);
}