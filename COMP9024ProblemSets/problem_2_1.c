#include "problem_2_1.h"

struct stack* initStack()
{
	struct stack* temp = malloc((2 + BASE) * sizeof(int));
	temp->size = BASE;
	temp->cnt = 0;
	int *int_data = malloc(BASE * sizeof(int));
	temp->data = int_data;
	return temp;
}

int is_empty(const struct stack* current_stack)
{
	return (!current_stack->cnt);//return 1 if the stack is empty, 0 otherwise
}

void push(struct stack* current_stack, const int value)
{
	if (current_stack->cnt == current_stack->size)
	{
		current_stack->size *= 2;
		current_stack->data = realloc(current_stack->data, current_stack->size * sizeof(int));
	}
	*(current_stack->data + current_stack->cnt) = value;
	current_stack->cnt++;
	return;
}

int pop(struct stack* current_stack)
{
	if (is_empty(current_stack))
	{
		printf("The stack is empty, cannot pop from it.\n");
		return -1;
	}
	int temp = *(current_stack->data + current_stack->cnt - 1);
	current_stack->cnt--;
	return temp;
}