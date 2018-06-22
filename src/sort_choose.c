/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Sort ptr
*/

#include <string.h>
#include "ptr.h"

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
	else if (strncmp(tab[1], sort[0], strlen(sort[0])) == 0) {
		name_sort(tab, employee);
	}
	return (0);
}

//	else if (strncmp(res, sort[1], strlen(sort[1])) == 0)
//		manage_meeting(res, meeting);


/*ptr_t *init_sort(void)
{
	ptr_t *new = malloc(sizeof(ptr_t) * 2);

	new[0] = init_struct("sortByName", &name_sort);
//	new[1] = init_struct("new_meeting", &manage_meeting);
//	new[2] = init_struct("info_employees", &sort_employee);
	return (new);
}

int manage_sort(char *s, char *res, meeting_t **meeting, employee_t **employee)
{
	ptr_t *check = init_sort();
	int a = 0;

	while (a != 1) {
		if (strncmp(s, check[a].command,
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