#include "problem_3_5.h"

int scan_for_certain(struct stack* current_stack, struct queue* current_queue, int value) {
	int cnt = 0;
	int temp;
	int flag = 0;
	int length = get_length_stack(current_stack);
	for(int j=0;j<length;j++) {
		temp = pop_stack(current_stack);
		cnt++;
		push_queue(current_queue, temp);
		if (temp == value) {
			flag = 1;
			break;
		}
	}
	for (int i = 0; i < cnt; i++) {
		push_stack(current_stack, pop_queue(current_queue));
	}
	for (int i = 0; i < cnt; i++) {
		int temp = pop_stack(current_stack);
		push_queue(current_queue, temp);
	}
	for (int i = 0; i < cnt; i++) {
		push_stack(current_stack, pop_queue(current_queue));
	}
	return flag;
}

void holder() {
	struct stack* current_stack = create_stack();
	push_stack(current_stack, 1);
	push_stack(current_stack, 2);
	push_stack(current_stack, 3);
	push_stack(current_stack, 4);
	push_stack(current_stack, 5);
	struct queue* current_queue = create_queue();
	printf("%s.\n", scan_for_certain(current_stack, current_queue, 1) ? "Contain" : "Not contain");
	return;
}