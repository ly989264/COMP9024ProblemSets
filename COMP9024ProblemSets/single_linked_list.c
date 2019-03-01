#include "single_linked_list.h"

struct node* create_node(int value)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->value = value;
	temp->next = NULL;
	return temp;
}

struct linked_list* create_linked_list()
{
	struct linked_list* temp = (struct linked_list*)malloc(sizeof(struct linked_list));
	temp->size = 0;
	temp->first_node = NULL;
	return temp;
}

int get_len(const struct linked_list* current_linked_list)
{
	return current_linked_list->size;
}

void add_element_to_linked_list(struct linked_list* current_linked_list, const int value)
{
	struct node* new_node = create_node(value);
	if (get_len(current_linked_list)==0)
	{
		current_linked_list->first_node = new_node;
		current_linked_list->size++;
		return;
	}
	struct node* current = current_linked_list->first_node;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;
	current_linked_list->size++;
	return;
}

void print_linked_list(const struct linked_list* current_listed_list)
{
	if (get_len(current_listed_list)==0)
	{
		return;
	}
	struct node* current = current_listed_list->first_node;
	while(current->next)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	printf("%d\n", current->value);
	return;
}

void delete_last_element(struct linked_list* current_linked_list)
{
	if (get_len(current_linked_list)==0)
	{
		printf("The linked list is empty, cannot delete the last element from it.\n");
		return;
	}
	if (get_len(current_linked_list)==1)
	{
		free(current_linked_list->first_node);
		current_linked_list->first_node = NULL;
		current_linked_list->size--;
		return;
	}
	struct node* current = current_linked_list->first_node;
	while(current->next->next)
	{
		current = current->next;
	}
	struct node* temp = current->next;
	current->next = NULL;
	free(temp);
	current_linked_list->size--;
	return;
}

void delete_first_element(struct linked_list* current_linked_list)
{
	if (get_len(current_linked_list) == 0)
	{
		printf("The linked list is empty, cannot delete the first element of it.\n");
		return;
	}
	if(get_len(current_linked_list)==1)
	{
		free(current_linked_list->first_node);
		current_linked_list->first_node = NULL;
		return;
	}
	struct node* current = current_linked_list->first_node;

}


void free_linked_list(struct linked_list* current_linked_list)
{
	struct node* current = current_linked_list->first_node;
	struct node* temp;
	while(current->next)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free(current);
	free(current_linked_list);
	return;
}


