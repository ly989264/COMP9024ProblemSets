#include "problem_2_2.h"

void stack_testing_function()
{
	struct stack* x = initStack();
	printf("Enter a positive number: ");
	int num;
	int val;
	scanf("%d", &num);
	if (num<=0)
	{
		printf("The number %d you input is not a positive number!\n", num);
		return;
	}
	for (int i=0;i<num;i++)
	{
		printf("Enter a number: ");
		scanf("%d", &val);
		push(x, val);
	}
	while (!is_empty(x))
	{
		printf("%d\n", pop(x));
	}
	return;
}