#include "problem_1_1.h"

int* parse_number(int number, int length)
{
	int *p = malloc(length * sizeof(int));
	int cnt = 0;
	while (number)
	{
		*(p + cnt) = number - number / 10 * 10;
		number /= 10;
		++cnt;
	}
	return p;
}

void find_number()
{
	for (int i = 10000;i<100000;i++)
	{
		int result_num = i * 4;
		if (result_num > 99999) continue;
		int *num_arr = parse_number(i,5);
		int *res_arr = parse_number(result_num,5);
		int flag = 1;
		for (int j=0;j<5;j++)
		{
			if (*(num_arr+j) != *(res_arr+4-j))
			{
				flag = 0;
				break;
			}
		}
		if (!flag) continue;
		printf("The number is %d.\n", i);
	}
}