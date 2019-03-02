#include "problem_3_7.h"

void operate_3_7() {
	struct linked_list* x = create_linked_list();
	printf("Enter an integer: ");
	int temp;
	while (scanf("%d", &temp) == 1) {
		add_element_to_linked_list(x, temp);
		printf("Enter an integer: ");
	}
	printf("Finished. List is ");
	if (get_len(x) == 0)
		return;
	struct node* current_node = x->first_node;
	while (current_node->next) {
		printf("%d->", current_node->value);
		current_node = current_node->next;
	}
	printf("%d\n", current_node->value);
	int length_of_list = get_len(x);
	int half_cnt = (length_of_list + 1) / 2;
	int second_half_cnt = length_of_list - half_cnt;
	printf("First half is ");
	current_node = x->first_node;
	for (int i = 0; i < half_cnt-1; i++) {
		printf("%d->", current_node->value);
		current_node = current_node->next;
	}
	printf("%d\nSecond half is ", current_node->value);
	current_node = current_node->next;
	while (current_node->next) {
		printf("%d->", current_node->value);
		current_node = current_node->next;
	}
	printf("%d\n", current_node->value);
	free_linked_list(x);
	return;
}