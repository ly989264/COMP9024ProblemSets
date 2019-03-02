#include "stack_adt.h"

struct stack* create_stack() {
	struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
	struct linked_list* temp_linked_list = create_linked_list();
	temp->data = temp_linked_list;
	return temp;
}

void push_stack(struct stack* current_stack, const int value) {
	add_element_to_linked_list(current_stack->data, value);
}

int pop_stack(struct stack* current_stack) {
	if (get_len(current_stack->data) == 0) {
		printf("The stack is empty, cannot pop from it.\n");
		return -1;
	}
	int temp_result = delete_last_element(current_stack->data);
	return temp_result;
}

int get_length_stack(const struct stack* current_stack) {
	return get_len(current_stack->data);
}

void print_stack(const struct stack* current_stack) {
	print_linked_list(current_stack->data);
}

void free_stack(struct stack* current_stack) {
	free(current_stack->data);
	free(current_stack);
}