/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Calendar
*/

typedef struct meeting_t
{
	char *id;
	char *date;
	char *place;
	char **pers;
	struct meeting_t *next;
} meeting_t;

typedef struct employee_t
{
	char *last_name;
	char *first_name;
	char *position;
	char *city;
	char *id;
	struct employee_t *next;
} employee_t;

int create_linked_list(void);
int tab_print(char **);
char **str_to_word_tab(char *, char);
employee_t *init_employee(char **);
meeting_t *init_meeting(char **);
int add_employee(employee_t *, char **);
int add_meeting(meeting_t *, char **);
int employee_print(employee_t *);
int meeting_print(meeting_t *);
int tab_size(char **);
char **tab_dup(char **);
int meeting_free(meeting_t *);
int employee_free(employee_t *);
int free_tab(char **);