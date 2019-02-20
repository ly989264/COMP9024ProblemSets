#include "problem_1_8.h"

void sort_sequence()
{
	unsigned size = 10;
	unsigned cnt = 0;
	int *p = malloc(size * sizeof(int));
	int temp;
	while (scanf_s("%d",&temp))
	{
		if (cnt==size-1)
		{
			size *= 2;
			p=(int*)realloc(p, size*sizeof(int));//DONOT FORGET THE sizeof(int), and need to assign the result to the pointer
			// int *new_space = malloc(size * sizeof(int));
			// int *temp_space = p;
			// p = new_space;
			// new_space = temp_space;
			// for (unsigned i = 0; i < cnt; i++) *(p + i) = *(new_space + i);
			// free(new_space);
		}
		for (unsigned i=0;i<cnt;i++)
		{
			if (temp<*(p+i))
			{
				int t = temp;
				temp = *(p + i);
				*(p + i) = t;
			}
		}
		*(p + cnt) = temp;
		cnt++;
		//cout the current array
		for (int i = 0; i < cnt; i++) printf("%d ", *(p + i));
		printf("\n");
	}
	for (unsigned j = 0; j < cnt; j++) printf("%d ", *(p + j));
	printf("\n");
	free(p);
	return;
}