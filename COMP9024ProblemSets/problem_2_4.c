#include "problem_2_4.h"

void convert_base2(int num)
{
	struct stack* x = initStack();
	while (num>0)
	{
		push(x, num % 2);
		num = num / 2;
	}
	while (!is_empty(x))
		printf("%d", pop(x));
	printf("\n");
	return;
}