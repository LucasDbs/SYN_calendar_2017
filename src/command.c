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
	static char *command[2];

	command[0] = "new_employee";
	command[1] = "new_meeting";
	command[2] = "info_employees";
	return (command);
}

int manage_struct(char *res, meeting_t **meeting, employee_t **employee)
{
	char **tab = create_command();

	if (strncmp(res, tab[0], strlen(tab[0])) == 0)
		manage_employee(res, employee);
	else if (strncmp(res, tab[1], strlen(tab[1])) == 0)
		manage_meeting(res, meeting);
	return (0);
}

//	else if (strncmp(res, tab[2], strlen(tab[2])) == 0) {
	//	printf("la\n");
//		sort_employee(res, employee);
//	}


/*ptr_t init_struct(char *s, int (*ptr)(char *, meeting_t **, employee_t **))
{
	ptr_t new;

	new.command = s;
	new.ptr = ptr;
	return (new);
}

ptr_t *init_ptr(void)
{
	ptr_t *new = malloc(sizeof(ptr_t) * 3);

	new[0] = init_struct("new_employee", &manage_employee);
	new[1] = init_struct("new_meeting", &manage_meeting);
	new[2] = init_struct("info_employees", &sort_employee);
	return (new);
}

//      new[3] = init_struct('i', &add_min);
//      new[4] = init_struct('a', &add_max);

int manage_struct(char *res, meeting_t **meeting, employee_t **employee)
{
	ptr_t *check = init_ptr();
	int a = 0;

	while (a != 3) {
		if (strncmp(res, check[a].command,
			strlen(check[a].command)) == 0) {
			check[a].ptr(res, meeting, employee);
			free(check);
			return (0);
		}
		a++;
	}
	free(check);
	return (0);
}*/
