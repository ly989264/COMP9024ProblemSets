#include "queue_adt.h"

struct queue* create_queue() {
	struct linked_list* temp_linked_list = create_linked_list();
	struct queue* temp = (struct queue*)malloc(sizeof(struct queue));
	temp->data = temp_linked_list;
	return temp;
}

void push_queue(struct queue* current_queue, const int value) {
	add_element_to_linked_list(current_queue->data, value);
}

int pop_queue(struct queue* current_queue) {
	if (get_len(current_queue->data) == 0) {
		printf("The queue is empty, cannot pop from it.\n");
		return -1;
	}
	int temp = current_queue->data->first_node->value;
	delete_first_element(current_queue->data);
	return temp;
}

int get_length_queue(const struct queue* current_queue) {
	return get_len(current_queue->data);
}

void print_queue(const struct queue* current_queue) {
	print_linked_list(current_queue->data);
}

void free_queue(struct queue* current_queue) {
	if (get_length_queue(current_queue) == 0) {
		free(current_queue);
		return;
	}
	free_linked_list(current_queue->data);
	free(current_queue);
	return;
}