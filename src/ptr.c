/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Ptr functions
*/

#include <stdlib.h>
#include <string.h>
#include "ptr.h"

ptr_t init_struct(char *s, int (*ptr)(char *, meeting_t **, employee_t **))
{
	ptr_t new;

	new.command = s;
	new.ptr = ptr;
	return (new);
}

ptr_t *init_ptr(void)
{
	ptr_t *new = malloc(sizeof(ptr_t) * 2);

	new[0] = init_struct("new_employee", &manage_employee);
	new[1] = init_struct("new_meeting", &manage_meeting);
	return (new);
}

//      new[2] = init_struct('b', &add_base);
//      new[3] = init_struct('i', &add_min);
//      new[4] = init_struct('a', &add_max);

int manage_struct(char *res, meeting_t **meeting, employee_t **employee)
{
	ptr_t *check = init_ptr();
	int a = 0;

	while (a != 2) {
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
}
