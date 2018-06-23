/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Sort by name
*/

#include "calendar.h"

int name_sort(char **tab, employee_t **employee)
{
	(void)tab;

	bubname_employee(*employee);
	return (0);
}

int forename_sort(char **tab, employee_t **employee)
{
	(void)tab;

	bubforename_employee(*employee);
	return (0);
}

int job_sort(char **tab, employee_t **employee)
{
	(void)tab;

	bubjob_employee(*employee);//, 2);
	return (0);
}

int zip_sort(char **tab, employee_t **employee)
{
	(void)tab;

	bubint_employee(*employee, 1);
	return (0);
}
