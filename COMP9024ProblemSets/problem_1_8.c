#include "problem_1_8.h"

void sort_sequence()
{
	unsigned size = 10;
	unsigned cnt = 0;
	int *p = malloc(size * sizeof(int));
	int temp;
	while (scanf_s("%d",&temp))
	{
		if (cnt==size)
		{
			size *= 2;
			realloc(p, size);
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
	}
	for (unsigned j = 0; j < cnt; j++) printf("%d ", *(p + j));
	printf("\n");
	free(p);
	return;
}