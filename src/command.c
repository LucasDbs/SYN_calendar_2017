/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Command check
*/

#include <stdlib.h>
#include <string.h>
#include "calendar.h"

char **create_command(void)
{
	static char *command[3];

	command[0] = "new_employee";
	command[1] = "new_meeting";
	command[2] = "info_employees";
	command[3] = "fire";
	return (command);
}

int manage_struct(char *res, meeting_t **meeting, employee_t **employee)
{
	char **tab = create_command();

	if (strncmp(res, tab[0], strlen(tab[0])) == 0)
		manage_employee(res, employee);
	else if (strncmp(res, tab[1], strlen(tab[1])) == 0)
		manage_meeting(res, meeting);
	else if (strncmp(res, tab[2], strlen(tab[2])) == 0)
		sort_employee(res, employee);
	return (0);
}

//	else if (strncmp(res, tab[3], strlen(tab[3])) == 0)
//		fire_employee(res, employee);
