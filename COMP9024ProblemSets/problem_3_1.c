#include "problem_3_1.h"

int* makeArrayOfInts(void)
{
	int *arr = (int*)malloc(10 * sizeof(int));
	for(int i =0;i<10;i++)
	{
		*(arr + i) = i;
	}
	return arr;
}
