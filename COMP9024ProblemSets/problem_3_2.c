#include "problem_3_2.h"

void func(int** a)
{
	*a = (int*)malloc(sizeof(int));
}

void testing_func()
{
	int* p;
	func(&p);//note that I think this should pass &p here because the parameter is a pointer to pointer to int
	*p = 6;
	printf("%d\n", *p);
	free(p);
	return;
}

