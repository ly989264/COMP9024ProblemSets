#include "problem_3_6.h"

void operate_3_6() {
	struct linked_list* x = create_linked_list();
	printf("Enter an integer: ");
	int temp;
	while (scanf("%d", &temp) == 1) {
		add_element_to_linked_list(x, temp);
		printf("Enter an integer: ");
	}
	if (get_len(x) == 0)
		return;
	struct node* current_node = x->first_node;
	while (current_node->next) {
		printf("%d->", current_node->value);
		current_node = current_node->next;
	}
	printf("%d\n", current_node->value);
	free_linked_list(x);
	return;
}