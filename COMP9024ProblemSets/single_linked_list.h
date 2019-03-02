#pragma once
#include <stdio.h>
#include <stdlib.h>


struct node
{
	int value;
	struct node* next;
};

struct linked_list
{
	int size;
	struct node* first_node;
};

struct node* create_node(int value);
struct linked_list* create_linked_list();
int get_len(const struct linked_list* current_linked_list);
void add_element_to_linked_list(struct linked_list* current_linked_list, const int value);
void print_linked_list(const struct linked_list* current_listed_list);
int delete_last_element(struct linked_list* current_linked_list);
void delete_first_element(struct linked_list* current_linked_list);
void free_linked_list(struct linkd_list *current_linked_list);