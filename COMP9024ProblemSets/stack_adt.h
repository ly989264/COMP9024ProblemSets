#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "single_linked_list.h"

struct stack {
	struct linked_list* data;
};

struct stack* create_stack();
void push_stack(struct stack* current_stack, const int value);
int pop_stack(struct stack* current_stack);
int get_length_stack(const struct stack* current_stack);
void print_stack(const struct stack* current_stack);
void free_stack(struct stack* current_stack);