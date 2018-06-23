/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Sort ptr
*/

#include <string.h>
#include "calendar.h"

char **create_sort(void)
{
	static char *tab[5];

	tab[0] = "sortByName";
	tab[1] = "sortByForename";
	tab[2] = "sortByJob";
	tab[3] = "sortByZip";
	tab[4] = "sortById";
	return (tab);
}

int sort_employee(char *res, employee_t **employee)
{
	char **sort = create_sort();
	char **tab = str_to_word_tab(res, ' ');

	if (tab == NULL || tab_size(tab) < 2)
		return (-1);
	else if (strncmp(tab[1], sort[0], strlen(sort[0])) == 0)
		name_sort(tab, employee);
	else if (strncmp(tab[1], sort[1], strlen(sort[1])) == 0)
		forename_sort(tab, employee);
	else if (strncmp(tab[1], sort[2], strlen(sort[2])) == 0)
		job_sort(tab, employee);
	else if (strncmp(tab[1], sort[3], strlen(sort[3])) == 0)
		zip_sort(tab, employee);
/*	else if (strncmp(tab[1], sort[4], strlen(sort[4])) == 0)
		bubint_employee(*employee, 0);*/
	free_tab(tab);
	return (0);
}

//	else if (strncmp(res, sort[1], strlen(sort[1])) == 0)
//		manage_meeting(res, meeting);
