/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Ptr.h
*/

#ifndef PTR_H_
#define PTR_H_

#include"calendar.h"

typedef struct ptr_t
{
	char *command;
	int (*ptr)(char *, meeting_t **, employee_t **);
} ptr_t;

#endif