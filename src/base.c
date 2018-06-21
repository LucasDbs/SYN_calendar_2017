/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Basic functions
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "calendar.h"

char **tab_dup(char **tab)
{
	int i = 4;
	int a = 0;
	char **new = malloc(sizeof(char *) * (tab_size(tab) + 1));

	if (new == NULL)
		return (NULL);
	while (tab[i])
		new[a++] = strdup(tab[i++]);
	new[a] = NULL;
	return (new);
}

int tab_size(char **tab)
{
	int i = 0;

	while (tab[i])
		i++;
	return (i);
}

int tab_print(char **tab)
{
	int i = 0;

	while (tab[i]) {
		printf("tab[%d] = %s\n", i, tab[i]);
		i++;
	}
	return (0);
}