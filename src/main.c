/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Main function
*/

#include <stdio.h>
#include <string.h>
#include "calendar.h"

int h_print(void)
{
	printf("USAGE\n");
	printf("\t write instructions to the standard output\
until the END instruction\n");
	return (0);
}

int check_h(char **av)
{
	int i = 0;

	while (av[i]) {
		if (strcmp(av[i], "-h") == 0)
			return(h_print());
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac > 2)
		return (84);
	check_h(av);
	create_linked_list();
	return (0);
}
