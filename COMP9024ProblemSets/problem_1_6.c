#include "problem_1_6.h"

int Fib(int num)
{
	if (num == 1 || num == 2)
		return 1;
	return Fib(num - 1) + Fib(num - 2);
}